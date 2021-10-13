#include "pipex.h"

void pipe_in(int file1, int fd[2], char *cmd1, char **env)
{
    int to_free;
    char *tmp = parse_cmd(cmd1, env, &to_free);
    char **cmd = ft_split(tmp, ' ');
    
    if (to_free)
        free(tmp);
    close(fd[0]);
    if (dup2(fd[1], 1) == -1)
        ft_error("dup2 error in pipe_in function.");
    close(fd[1]);
    close(file1);
    execve(cmd[0], cmd, env);
    ft_free_str(cmd);
}

void pipe_out(int file2, int fd[2], char *cmd2, char **env)
{
    int to_free;
    char *tmp = parse_cmd(cmd2, env, &to_free);
    char **cmd = ft_split(tmp, ' ');

    if (to_free)
        free(tmp);
    close(fd[1]);
    if (dup2(fd[0], 0) == -1)
        ft_error("dup2 error in pipe_out function.");
    close(fd[0]);
    close(file2);
    execve(cmd[0], cmd, env);
    ft_free_str(cmd);
}
#include "pipex.h"

void open_files(int *file1, int *file2, char **argv)
{
    *file1 = open(argv[1], O_RDONLY);
    *file2 = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (access(argv[1], R_OK | F_OK) == -1)
        ft_error("No access to file1.");
    if (*file1 == -1)
        ft_error("Failed opening the file1.");
    if (*file2 == -1)
        ft_error("Failed opening the file2."); 
}

void pipex(char **argv, char **env, int file1, int file2)
{
    int     fd[2];
    int     status;
    pid_t   child1;
    pid_t   child2;

    if (pipe(fd) == -1)
        ft_error("Pipe Error.");
    if ((child1 = fork()) == -1)
        ft_error("Fork Error.");
    if (child1 == 0)
        pipe_in(file1, fd, argv[2], env);
    if ((child2 = fork()) == -1)
        ft_error("Fork Error.");
    if (child2 == 0)
        pipe_out(file2, fd, argv[3], env);
    close(fd[0]);
    close(fd[1]);
    waitpid(child1, &status, 0);
    waitpid(child2, &status, 0);
}
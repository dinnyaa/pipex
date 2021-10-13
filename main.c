#include "pipex.h"

int main(int argc, char **argv,char **env)
{
    int file1;
    int file2;

    if (argc != 5)
        ft_error("4 arguments needed.\nRun File1 Cmd1 Cmd2 File2.");
    open_files(&file1, &file2, argv);
    if (dup2(file1, 0) == -1 || dup2(file2, 1) == -1)
        ft_error("dup2 error.");
    pipex(argv, env, file1, file2);
    return (0);
}
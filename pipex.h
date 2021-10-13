#ifndef PIPEX_H
#define PIPEX_H
#include "./libft/libft.h"
#include <fcntl.h>


char *parse_cmd(char *cmd, char **env, int *to_free);
void open_files(int *file1, int *file2, char **argv);
void pipex(char **argv, char **env, int file1, int file2);
void pipe_in(int file1, int fd[2], char *cmd1, char **env);
void pipe_out(int file2, int fd[2], char *cmd2, char **env);





#endif
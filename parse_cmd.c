#include "pipex.h"

static char **get_paths(char **env)
{
    int i = 0;
    char **paths;
    while (env[i] != '\0')
    {
        if (ft_strncmp(env[i],"PATH=", 5) == 0)
            paths = ft_split(env[i], ':');
        i++;
    }
    return (paths);
}
static char *join_cmd(char *addr, char *cmd)
{
    char *tmp;
    char *done;

    tmp = ft_strjoin(addr, "/");
    done = ft_strjoin(tmp, cmd);
    free(tmp);
    return (done);
}
static char *cut_cmd(char *str)
{
    char    *rtn;
    int     len = 0;
    int     i = 0;

    if (!ft_has_space(str))
        return (str);
    while (str[len] != ' ')
        len++;
    rtn = (char*)malloc(i + 1);

    while (i < len)
    {
        rtn[i] = str[i];
        i++;
    }
    rtn[i] = '\0';
    return (rtn);
}
char *parse_cmd(char *cmd, char **env, int *to_free)
{
    char *tmp;
    char *cut;
    char **paths;

    *to_free = (*cmd == '/') ? 0 : 1;
    if (*cmd == '/' && access(cmd, F_OK) == 0)
        return (cmd);
    else
    {
        paths = get_paths(env);
        cut = cut_cmd(cmd);
        if (ft_strlen(cut) == 0)
            ft_error("command not found.");
        for (int i = 0; paths[i] != '\0'; i++)
        {
            tmp = join_cmd(paths[i], cut);
            if (access(tmp, F_OK) == 0)
                return (join_cmd(paths[i], cmd));
            free(tmp);
        }
    }
    ft_error("command not found.");
    return (NULL);
}
#include "libft.h"

int ft_has_space(char *str)
{
    int i = 0;
    while (i < ft_strlen(str))
    {
        if (ft_isspace(str[i]))
            return (1);
        i++;        
    }
    return (0);
}
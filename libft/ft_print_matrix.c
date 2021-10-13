#include "libft.h"

void ft_print_matrix(int **matrix,int row, int column)
{
    int i;
    int j = 0;
    while (j < row)
    {
        i = 0;
        while (i < column)
        {
            ft_putnbr_fd(matrix[j][i], 1);
            ft_putchar_fd('\t', 1);
            i++;
        }
        ft_putchar_fd('\n', 1);
        j++;
    }
}
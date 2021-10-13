#include "libft.h"

void ft_free_matrix(int **matrix, int size)
{
	int j = 0;
	while (j < size)
	{
		free(matrix[j]);
		j++;
	}
	free(matrix);
}
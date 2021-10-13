#include "libft.h"

int	*ft_num_dup(int *src, int size)
{
	int		*dest;
	int		i;

	i = 0;
	dest = (int*)malloc(size * sizeof(int));
	if (dest == NULL)
		return (NULL);
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
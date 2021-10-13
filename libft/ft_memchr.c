/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaghdas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:08:55 by dbaghdas          #+#    #+#             */
/*   Updated: 2021/01/26 16:27:21 by dbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*nstr;
	unsigned char	newc;
	size_t			i;

	nstr = (unsigned char*)str;
	newc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (nstr[i] == newc)
			return (&nstr[i]);
		i++;
	}
	return (NULL);
}

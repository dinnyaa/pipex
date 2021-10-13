/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaghdas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:37:08 by dbaghdas          #+#    #+#             */
/*   Updated: 2021/02/12 18:40:50 by dbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char	*csrc;
	unsigned char		*cdest;
	unsigned char		newc;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	csrc = src;
	cdest = (unsigned char*)dest;
	newc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		if (csrc[i] == newc)
			return (cdest + i + 1);
		i++;
	}
	return (NULL);
}

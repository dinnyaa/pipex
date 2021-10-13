/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaghdas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 18:32:33 by dbaghdas          #+#    #+#             */
/*   Updated: 2021/02/12 16:45:00 by dbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	newc;

	tmp = (unsigned char*)str;
	newc = (unsigned char)ch;
	i = 0;
	while (i < n)
	{
		*tmp = newc;
		tmp++;
		i++;
	}
	return (str);
}

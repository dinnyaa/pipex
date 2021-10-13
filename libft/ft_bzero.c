/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaghdas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 20:07:00 by dbaghdas          #+#    #+#             */
/*   Updated: 2021/02/12 16:45:33 by dbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char*)str;
	i = 0;
	while (i < n)
	{
		*temp = 0;
		temp++;
		i++;
	}
	return (void)(str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaghdas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 15:12:20 by dbaghdas          #+#    #+#             */
/*   Updated: 2021/02/14 10:10:55 by dbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*n1;
	unsigned char	*n2;

	i = 0;
	n1 = (unsigned char*)s1;
	n2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && n1[i] == n2[i] && n1[i] != '\0' && n2[i] != '\0')
		i++;
	return (n1[i] - n2[i]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaghdas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:14:26 by dbaghdas          #+#    #+#             */
/*   Updated: 2021/02/14 11:28:20 by dbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	newc;
	size_t	i;

	tmp = (char*)s;
	newc = (char)c;
	i = ft_strlen(s);
	if (newc == '\0')
		return (&tmp[i]);
	while (i--)
	{
		if (tmp[i] == newc)
			return (&tmp[i]);
	}
	return (NULL);
}

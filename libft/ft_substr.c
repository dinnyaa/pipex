/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaghdas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:05:02 by dbaghdas          #+#    #+#             */
/*   Updated: 2021/02/15 18:12:58 by dbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	overlen;

	if (!s)
		return (NULL);
	overlen = ft_strlen(s + start);
	i = 0;
	if (overlen < len)
		len = overlen;
	if (!(str = (char*)malloc(len + 1)))
		return (NULL);
	while (i < len && (start + i) < ft_strlen(s))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

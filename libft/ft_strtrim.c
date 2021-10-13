/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaghdas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:07:59 by dbaghdas          #+#    #+#             */
/*   Updated: 2021/02/04 16:49:40 by dbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_set(char const *set, char const c)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	len;

	len = 0;
	if (!s1)
		return (NULL);
	while (check_set(set, *s1))
		s1++;
	if (!*s1)
	{
		ptr = ft_strdup("");
		return (ptr);
	}
	len = ft_strlen(s1);
	while (check_set(set, *(s1 + len - 1)))
		len--;
	if (!(ptr = malloc(len + 1)))
		return (0);
	ft_memcpy(ptr, s1, len);
	*(ptr + len) = '\0';
	return (ptr);
}

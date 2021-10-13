/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaghdas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:39:52 by dbaghdas          #+#    #+#             */
/*   Updated: 2021/02/15 16:29:35 by dbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len(int n)
{
	int len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int		l;
	char	*ptr;
	long	num;

	num = n;
	l = len(num);
	ptr = (char*)malloc(sizeof(char) * (l + 1));
	if (!ptr)
		return (NULL);
	if (num == 0)
		ptr[0] = '0';
	else if (num < 0)
	{
		ptr[0] = '-';
		num *= -1;
	}
	ptr[l--] = '\0';
	while (num)
	{
		ptr[l] = num % 10 + '0';
		l--;
		num /= 10;
	}
	return (ptr);
}

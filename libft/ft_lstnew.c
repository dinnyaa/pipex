/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaghdas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:53:24 by dbaghdas          #+#    #+#             */
/*   Updated: 2021/02/14 10:20:27 by dbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *first;

	if (!(first = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	first->content = content;
	first->next = NULL;
	return (first);
}

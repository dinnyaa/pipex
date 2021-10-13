/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaghdas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:02:53 by dbaghdas          #+#    #+#             */
/*   Updated: 2021/02/04 16:21:02 by dbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *))
{
	t_list *head;
	t_list *temp;

	if (!lst)
		return (NULL);
	if (!(temp = ft_lstnew(f(lst->content))))
		ft_lstdelone(lst, del);
	else
	{
		head = temp;
		lst = lst->next;
	}
	while (lst)
	{
		if (!(temp->next = ft_lstnew(f(lst->content))))
			ft_lstdelone(lst, del);
		temp = temp->next;
		lst = lst->next;
	}
	return (head);
}

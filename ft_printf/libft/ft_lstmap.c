/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:28:53 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 15:58:36 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * parameters:
 * 1. address of pointer to an element
 * 2. address of the function used to iterate
 * 3. address of the function used to delete the content of an element
 *
 * Iterates the list 'lst' and applies the function 'f' to each.
 * Creates a new list resulting of the successive applications of function 'f'.
 * The 'del' function is used to delete content if needed
*/
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	new_elem = ft_lstnew(f(lst->content));
	if (!new_elem)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_lst = new_elem;
	lst = lst->next;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new_lst, del);
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_elem);
	}
	return (new_lst);
}

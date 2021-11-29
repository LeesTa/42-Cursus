/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:56:06 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:04:22 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Adds the element 'new' to end of list
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else if (*lst == NULL)
			*lst = new;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:14:35 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 14:21:50 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Deletes and frees the given element and every successor of that elment, 
 * using the function 'del' and free(3).
 * Finally, the pointer to the list must be set to NULL
*/
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst)
	{
		if (*lst)
		{
			while ((lst) && (*lst))
			{
				temp = (*lst)->next;
				ft_lstdelone(*lst, del);
				*lst = temp;
			}
		}
	}
}

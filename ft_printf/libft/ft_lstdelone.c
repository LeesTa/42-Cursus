/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:05:23 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 14:11:12 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Takes a parameter of an element, and frees the memory of the element's content
 * using the function 'del' given as a parameter and free the element.
 * The memeory of 'next' must not be freed
*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

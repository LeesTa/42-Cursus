/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:39:52 by lta               #+#    #+#             */
/*   Updated: 2021/09/24 12:08:34 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Allocates memory and returns a new element
 * The variable 'content' is initialized with 
 * the value of the parameter 'content'
 * variable 'next' is initialized to NULL
*/
#include "libft.h"

t_list
	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

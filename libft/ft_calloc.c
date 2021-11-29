/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:30:22 by lta               #+#    #+#             */
/*   Updated: 2021/09/27 11:34:31 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Contiguously allocates enough space for count objects that are size bytes each
 * and returns a pointer to the allocated memory.
 * The allocated memory is filled with bytes of value zero
*/

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if ((count == '0') || (size == '0'))
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}

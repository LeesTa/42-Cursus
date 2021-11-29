/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:18:35 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:18:02 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Copies n bytes from src to dst
 * Should not overlap, because behaviour is undefined
*/

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*test;
	char		*source;

	if (dst == NULL && src == NULL)
		return (NULL);
	test = (char *)dst;
	source = (char *)src;
	i = 0;
	while ((i < n))
	{
		test[i] = source[i];
		i++;
	}
	return (dst);
}

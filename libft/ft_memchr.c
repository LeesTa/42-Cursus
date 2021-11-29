/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:19:48 by lta               #+#    #+#             */
/*   Updated: 2021/09/24 12:09:17 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * locates first occurrence of c (converted to unsigned char) in string s
 * returns a pointer to the byte located,
 * or NULL if no such byte exists within n 
*/

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned const char *)(s + i) == (unsigned char)c)
			return ((void *)&((unsigned const char *)s)[i]);
		i++;
	}
	return (NULL);
}

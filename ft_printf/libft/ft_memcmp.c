/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:20:40 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:31:24 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Compares bytes from s1 to s2, both are assumed to be n bytes long
 * Returns 0 if the two strings are identical,
 * otherwise returns s1 - s2 when bytes are identical
*/

#include <stdlib.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char		*a;
	const unsigned char		*b;

	if ((s1 == s2) || (n == 0))
		return (0);
	a = (const unsigned char *)s1;
	b = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}

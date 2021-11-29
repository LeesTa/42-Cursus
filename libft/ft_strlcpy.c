/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:21:20 by lta               #+#    #+#             */
/*   Updated: 2021/09/24 12:09:57 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Copies strings
 * Takes the full size of destination buffer 
 * and guarantees Null-termination if room
 * designed to be better than strncpy
 * (NOTE room for Null should be included in size)
 * copies up to size - 1 chars from src to dst,
 * Null-terminating if dstsize is not 0
 * If src and dst overlap, behavior is undefined
 * returns the length of src
*/

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}

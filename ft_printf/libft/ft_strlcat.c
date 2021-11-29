/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:21:46 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:24:01 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Concatenates strings. Designed to be better than strncat
 * returns the total length of string they tried to create
 * this means initial length of dst, plus length of src
*/

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dstlen;
	size_t		i;
	size_t		srclen;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (size <= dstlen)
		return (srclen + size);
	while ((dst[i] != '\0') && (i < (size - 1)))
		i++;
	while ((*src != '\0') && (i < (size - 1)))
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}

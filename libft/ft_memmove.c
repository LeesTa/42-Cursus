/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:55:59 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:18:52 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Copies len bytes from src to dst
 * May overlap, copy always non-destructive
*/

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
		while (len-- != 0)
			*(char *)(dst + len) = *(char *)(src + len);
	return (dst);
}

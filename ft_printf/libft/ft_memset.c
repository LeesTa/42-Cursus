/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:06:16 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:14:02 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * write len bytes of value c (converted to unsigned char)
 * to the string b
*/

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int					i;
	unsigned char		*j;

	i = 0;
	j = b;
	while (len != 0)
	{
		j[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}

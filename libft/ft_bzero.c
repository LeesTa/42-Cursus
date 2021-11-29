/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:34:37 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:14:56 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Writes n zeroed bytes to string s
 * If n is zero, does nothing
*/

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*j;

	j = s;
	i = 0;
	if (n == 0)
		return ;
	while (n != 0)
	{
		j[i] = 0;
		i++;
		n--;
	}
	return ;
}

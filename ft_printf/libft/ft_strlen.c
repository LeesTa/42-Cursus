/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:23:35 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:13:04 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * counts length of string
*/

#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	int			i;
	size_t		count;

	count = 0;
	i = 0;
	while (s[i])
	{
		count++;
		i++;
	}
	return (count);
}

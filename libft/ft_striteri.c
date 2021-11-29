/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:29:35 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:43:29 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Applies function 'f' to each character of string argument
 * Each character is passed by address to f to be modified
*/

#include "libft.h"
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	if ((!s) || (!f))
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &(s[i]));
		i++;
	}
}

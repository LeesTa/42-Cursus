/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:14:19 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:42:17 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Returns a string created from successive applications of 'f'
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	i = 0;
	while ((!s) || (!f))
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

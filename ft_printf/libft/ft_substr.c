/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:25:07 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:37:18 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Allocates memory and returns a substring from the string 's'
 * Substring begins at 'start' and is of max size 'len'
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*ptr;

	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((i >= start) && (j < len))
		{
			*(ptr + j) = *(s + i);
			j++;
		}
		i++;
	}
	ptr[j] = 0;
	return (ptr);
}

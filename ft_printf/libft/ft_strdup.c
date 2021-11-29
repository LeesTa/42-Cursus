/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:20:11 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:36:04 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Allocates sufficient memory for ra copy of string s1
 * does the copy, and returns a pointer to it
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s1);
	ptr = ((char *)malloc(sizeof(char) * (i + 1)));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, i + 1);
	return (ptr);
}

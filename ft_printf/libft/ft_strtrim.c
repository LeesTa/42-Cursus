/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 10:33:56 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:38:31 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Trims characters from a set 'set' off the beginning and end of s1
*/

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int			len;
	int			i;
	char		*ptr;

	i = 0;
	if (!s1)
		return (ft_strdup(""));
	if ((set == NULL) || (ft_strlen(set) == 0))
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != 0)
		i++;
	while (ft_strchr(set, s1[len - 1]) != 0)
		len--;
	if (len <= i)
		return (ft_strdup(""));
	ptr = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, (char *)&s1[i], len - i + 1);
	ptr[ft_strlen(ptr)] = '\0';
	return (ptr);
}

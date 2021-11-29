/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:22:51 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:32:32 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Locates first occurrence of the needle/pin in the string hay/haystack,
 * where not more than len characters are searched
 * Characters that appear after a '\0' are not searched
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *pin, size_t len)
{
	size_t	len2;

	if (*(pin) == '\0')
		return ((char *)hay);
	len2 = ft_strlen(pin);
	while ((*(hay) != '\0') && (len-- >= len2))
	{
		if ((*(hay) == *(pin)) && (ft_strncmp(hay, pin, len2) == 0))
			return ((char *)hay);
		hay++;
	}
	return (0);
}

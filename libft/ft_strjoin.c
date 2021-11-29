/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 10:04:38 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:38:03 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Allocates memory and returns a pointer of the concatenation of s1 and s2
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*ptr;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!ptr)
		return (0);
	ft_memmove(ptr, s1, s1len);
	ft_memmove(ptr + s1len, s2, s2len);
	ptr[s1len + s2len] = '\0';
	return (ptr);
}
/*
int	main()
{
	char s1[] = "where is my ";
	char s2[] = "malloc ???";
	printf("%s\n",ft_strjoin(s1,s2));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:40:11 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:39:57 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Allocates and returns an array of strings obtained by using 's'
 * as the delimiter
 * Array ended by null pointer
*/

#include <stdlib.h>
#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

static char	*ft_getstr(char *str, char c, int i)
{
	char	*ptr;
	int		j;
	int		size;

	j = i;
	while ((str[j]) && (str[j] != c))
		j++;
	size = j - i;
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr == 0)
		return (0);
	j = 0;
	while (j < size)
		ptr[j++] = str[i++];
	ptr[j] = '\0';
	return (ptr);
}

static void	ft_savelines(int *a, int *b, int *c)
{
	*a = 0;
	*b = 0;
	*c = 1;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		control;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 2));
	if (!arr)
		return (NULL);
	ft_savelines(&i, &j, &control);
	while (s[i])
	{
		if (s[i] == c)
			control = 1;
		else if ((s[i] != c) && (control == 1))
		{
			*(arr + j++) = ft_getstr((char *)s, c, i);
			control = 0;
		}
		i++;
	}
	*(arr + j) = 0;
	return (arr);
}

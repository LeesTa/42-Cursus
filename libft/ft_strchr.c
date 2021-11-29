/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:21:34 by lta               #+#    #+#             */
/*   Updated: 2021/09/24 12:09:34 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Locates the first occurence of c (converted to char),
 * in the string pointed by s
 * Terminating Null character is considered to be part of string,
 * therefore if c is '\0', the function locates the terminating '\0'
*/

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (c != '\0')
		return (0);
	return ((char *)s + i);
}

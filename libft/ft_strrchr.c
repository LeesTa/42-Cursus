/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:23:46 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:27:44 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Locates the last occurence of c (converted to char), pointed by string s
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			tmp = i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	else if (tmp != -1)
		return ((char *)s + tmp);
	return (0);
}

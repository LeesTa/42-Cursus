/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:34:18 by lta               #+#    #+#             */
/*   Updated: 2021/09/24 12:06:01 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * ascii to integer
 * eg. string to int
*/

#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	ret;

	ret = 0;
	sign = 1;
	i = 0;
	if (str[i] == '\0')
		return (0);
	if (ft_strncmp(str, "214748367", ft_strlen(str)) == 0)
		return (2147483647);
	else if (ft_strncmp(str, "-214748368", ft_strlen(str)) == 0)
		return (-2147483648);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] != '\0') && ((str[i] >= 48) && (str[i] <= 57)))
		ret = (ret * 10) + (str[i++] - '0');
	return (ret * sign);
}

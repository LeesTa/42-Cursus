/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:16:45 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:41:11 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Allocates memory and returns a string representing the integer
*/

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_countdig(long long n)
{
	long long	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_maxmin(int n)
{
	char				*ptr;
	int					i;
	unsigned int		min;

	i = ft_countdig(n);
	min = 2147483648;
	ptr = (char *)malloc(sizeof(char) * (ft_countdig(n) + 1));
	if (n == 0)
	{
		*(ptr) = '0';
		return (ptr);
	}
	else if (n == -2147483648)
	{
		while (min != 0)
		{
			ptr[i-- - 1] = min % 10 + '0';
			min = min / 10;
		}
		ptr[0] = '-';
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*ptr;

	i = ft_countdig(n);
	sign = 1;
	if ((n == -2147483648) || (n == 0))
		return (ft_maxmin(n));
	ptr = (char *)malloc(sizeof(char) * (ft_countdig(n) + 1));
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	if (n < 0)
	{
		n = n * -1;
		sign = -1;
	}
	while (n != 0)
	{
		ptr[i-- - 1] = n % 10 + '0';
		n = n / 10;
	}
	if (sign < 0)
		ptr[0] = '-';
	return (ptr);
}

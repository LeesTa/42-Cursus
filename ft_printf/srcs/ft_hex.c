/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:08:01 by lta               #+#    #+#             */
/*   Updated: 2021/11/10 10:38:25 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_ptr or ft_hex is called, for 'p','x' or 'X'
 * ft_ptr first prints '0x' for pointer representation
 * ft_ptrtostr is called to convert a string to hex representation
 * pointer and hex are in base 16
 */

#include "../includes/ft_printf.h"

static char	*ft_ptrtostr(unsigned long n, int *k)
{
	char	*str;

	while (n > 15)
	{
		n = n / 16;
		*k += 1;
	}
	str = (char *)malloc(sizeof(char) * (*k + 1));
	if (!str)
		return (NULL);
	str[*k] = '\0';
	return (str);
}

void	ft_ptr(t_print *table)
{
	unsigned long	n;
	int				k;
	char			*str;

	n = va_arg(table->args, unsigned long);
	k = 1;
	str = ft_ptrtostr(n, &k);
	ft_putstr_fd("0x", 1);
	table->count += 2;
	k--;
	while (k >= 0)
	{
		if (n % 16 < 10)
			str[k] = '0' + (n % 16);
		else
			str[k] = 'a' + (n % 16) - 10;
		n = n / 16;
		k--;
		table->count += 1;
	}
	ft_putstr_fd(str, 1);
	free(str);
}

void	ft_hex(t_print *table, char c)
{
	unsigned long	n;
	int				k;
	char			*str;

	n = va_arg(table->args, unsigned int);
	k = 1;
	str = ft_ptrtostr(n, &k);
	k--;
	while (k >= 0)
	{
		if (n % 16 < 10)
			str[k] = '0' + (n % 16);
		else if (c == 'x')
			str[k] = 'a' + (n % 16) - 10;
		else if (c == 'X')
			str[k] = 'A' + (n % 16) - 10;
		n = n / 16;
		k--;
		table->count += 1;
	}
	ft_putstr_fd(str, 1);
	free(str);
}

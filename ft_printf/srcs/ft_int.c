/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:28:56 by lta               #+#    #+#             */
/*   Updated: 2021/11/10 10:44:01 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_unsigned (u), calls ft_intprint to print in base 10
 * ft_signed (i,d), prints a '-' if negative, then sends to ft_intprint
 */

#include "../includes/ft_printf.h"

static void	ft_intprint(unsigned int n, t_print *table)
{
	if (n > 9)
	{
		ft_intprint(n / 10, table);
		ft_putchar_fd(n % 10 + '0', 1);
		table->count += 1;
	}
	else
		ft_putchar_fd(n % 10 + '0', 1);
}

void	ft_unsignedint(t_print *table)
{
	unsigned int	n;

	n = va_arg(table->args, unsigned int);
	ft_intprint(n, table);
	table->count += 1;
}

void	ft_signedint(t_print *table)
{
	unsigned int	i;
	int				n;

	n = va_arg(table->args, int);
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		table->count += 1;
		i = -n;
	}
	else
		i = n;
	ft_intprint(i, table);
	table->count += 1;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:57:31 by lta               #+#    #+#             */
/*   Updated: 2021/11/10 10:31:21 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_check_flag checks if "cspiudxX" exists first,
 * then uses ft_operate_flags to redirect the table and str
 */

#include "../includes/ft_printf.h"

static void	ft_operate_flags(t_print *table, const char *str)
{
	if (*str == 'c')
		ft_chr(table);
	else if (*str == 's')
		ft_str(table);
	else if (*str == 'p')
		ft_ptr(table);
	else if ((*str == 'x') || (*str == 'X'))
		ft_hex(table, *str);
	else if (*str == 'u')
		ft_unsignedint(table);
	else if ((*str == 'd') || (*str == 'i'))
		ft_signedint(table);
}

void	ft_check_flags(t_print *table, const char *str)
{
	str++;
	if (ft_strchr("cspdiuxX", *str) == 0)
	{
		ft_putchar_fd(*str, 1);
		table->count += 1;
		str++;
	}
	else
	{
		ft_operate_flags(table, str);
	}
}

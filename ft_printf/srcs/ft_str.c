/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:54:07 by lta               #+#    #+#             */
/*   Updated: 2021/11/10 10:45:16 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_str simply calls ft_putstr_fd to print string
 * otherwise prints (null) if the str doesn't existt
 */

#include "../includes/ft_printf.h"

void	ft_str(t_print *table)
{
	char	*str;

	str = va_arg(table->args, char *);
	if (str != NULL)
	{
		ft_putstr_fd(str, 1);
		table->count += ft_strlen(str);
	}
	else
	{
		ft_putstr_fd("(null)", 1);
		table->count += 6;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:45:24 by lta               #+#    #+#             */
/*   Updated: 2021/11/10 10:45:39 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_printf first calls ft_initialise_table 
 * to create a t_print object to save params,
 * ft_printf checks for % and prints accordingly 
 * or calls ft_check_flags to navigate where to go
 */
#include "../includes/ft_printf.h"

static	t_print	*ft_initialise_table(void)
{
	t_print	*table;

	table = (t_print *)malloc(sizeof(t_print));
	if (!table)
		return (0);
	table->count = 0;
	return (table);
}

int	ft_printf(const char *str, ...)
{
	t_print	*table;
	int		count;

	table = ft_initialise_table();
	if (!table)
		return (-1);
	va_start(table->args, str);
	while (*str != '\0')
	{
		if (*str != '%')
		{
			ft_putchar_fd(*str, 1);
			table->count += 1;
		}
		else if (*str == '%')
		{
			ft_check_flags(table, str);
			str++;
		}
		str++;
	}
	va_end(table->args);
	count = table->count;
	free(table);
	return (count);
}

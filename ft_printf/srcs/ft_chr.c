/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:47:10 by lta               #+#    #+#             */
/*   Updated: 2021/11/10 10:42:04 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * simply prints 1 char at a time
 */

#include "../includes/ft_printf.h"

void	ft_chr(t_print *table)
{
	char	c;

	c = va_arg(table->args, int);
	ft_putchar_fd(c, 1);
	table->count += 1;
}

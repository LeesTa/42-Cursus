/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:17:03 by lta               #+#    #+#             */
/*   Updated: 2021/11/09 13:17:53 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_print
{
	va_list	args;
	int		count;
}	t_print;

int		ft_printf(const char *str, ...);
void	ft_check_flags(t_print *table, const char *str);
void	ft_chr(t_print *table);
void	ft_str(t_print *table);
void	ft_ptr(t_print *table);
void	ft_hex(t_print *table, char c);
void	ft_unsignedint(t_print *table);
void	ft_signedint(t_print *table);

#endif

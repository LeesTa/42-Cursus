/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:39:47 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:45:40 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Outputs the string 's' to the given file descriptor
*/

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

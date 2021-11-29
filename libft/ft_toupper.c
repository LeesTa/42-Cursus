/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:23:58 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:25:26 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * if the argument is lowercase, it returns the corresponding uppercase
*/

int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		return (c - 32);
	return (c);
}

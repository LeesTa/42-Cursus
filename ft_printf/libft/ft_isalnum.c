/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:39:31 by lta               #+#    #+#             */
/*   Updated: 2021/09/21 16:11:22 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * returns 1 if is alphabetical or numerical
 * returns 0 if not
*/

int	ft_isalnum(int c)
{
	if ((c < 48) || (c > 122) || ((c > 57) && (c < 65))
		|| ((c > 90) && (c < 97)))
		return (0);
	return (1);
}
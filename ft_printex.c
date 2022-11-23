/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:35:35 by yamajid           #+#    #+#             */
/*   Updated: 2022/11/23 00:16:07 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printex(unsigned long nb, int *len, char c)
{
	char	*base;

	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	if (nb < 16)
		ft_putchar(base[nb], len);
	else
	{
		ft_printex(nb / 16, len, c);
		ft_printex(nb % 16, len, c);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:08:35 by yamajid           #+#    #+#             */
/*   Updated: 2022/11/23 00:27:12 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(int n, int *len)
{
	if (n >= 16)
		ft_putnbr_hex(n / 16, len);
	else if (n <= 9)
		ft_putchar('0' + n, len);
	else
		ft_putchar('a' + n, len);
}

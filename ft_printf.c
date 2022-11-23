/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:18:57 by yamajid           #+#    #+#             */
/*   Updated: 2022/11/23 05:32:41 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printarg(char c, int *len, va_list args)
{
	if (c == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (c == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (c == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), len);
	else if (c == 'x' || c == 'X')
		ft_printex(va_arg(args, int), len, c);
	else if (c == 'p')
	{
		ft_putstr("0x", len);
		ft_printex(va_arg(args, long), len, 'x');
	}
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	args;

	va_start (args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			printarg(str[i + 1], &len, args);
			i++;
		}
		else
			ft_putstr(&str[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}

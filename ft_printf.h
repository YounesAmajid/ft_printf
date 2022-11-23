/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:19:09 by yamajid           #+#    #+#             */
/*   Updated: 2022/11/23 05:30:25 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *len);
void	ft_putstr(const char *s, int *len);
void	ft_putnbr_hex(int n, int *len);
void	ft_printex(unsigned long nb, int *len, char c);
void	ft_putnbr(int nbr, int *len);
void	ft_putnbr_u(unsigned int nbr, int *len);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkcspdiux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:14:49 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/11/04 10:48:26 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	checkcspdiux(char c, va_list ap, int *cp, int *i)
{
	if (c == 'p')
	{
		ft_putstr("0x", cp);
		ft_putp(va_arg(ap, unsigned long long), cp);
	}
	if (c == 'u')
		ft_putnbr(va_arg(ap, unsigned int), cp, 10, c);
	if (c == 'x' || c == 'X')
		ft_putnbr(va_arg(ap, unsigned int), cp, 16, c);
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int), cp, 10, 0);
	if (c == 'c')
		ft_putchar((char)va_arg(ap, int), cp);
	if (c == 's')
		ft_putstr(va_arg(ap, char *), cp);
	if (c == '%')
		ft_putchar('%', cp);
	(*i)++;
}

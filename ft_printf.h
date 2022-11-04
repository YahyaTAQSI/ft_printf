/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:23:30 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/11/04 10:51:03 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
void	ft_putnbr(long long nb, int *p, int bs, char t);
void	ft_putstr(char *str, int *cp);
void	ft_putchar(char c, int *p);
void	checkcspdiux(char c, va_list ap, int *cp, int *i);
void	ft_putp(unsigned long long nb, int *cp);

#endif

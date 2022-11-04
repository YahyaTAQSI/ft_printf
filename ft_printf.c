/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:42:45 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/11/04 10:51:39 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		cp;
	int		i;

	va_start (ap, s);
	i = 0;
	cp = 0;
	while (s[i])
	{
		if (s[i] == '%')
			checkcspdiux(s[i + 1], ap, &cp, &i);
		else
			ft_putchar(s[i], &cp);
		i++;
	}
	va_end (ap);
	return (cp);
}

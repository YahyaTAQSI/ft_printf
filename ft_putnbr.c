/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:32:46 by ytaqsi            #+#    #+#             */
/*   Updated: 2022/11/04 10:48:38 by ytaqsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long long nb, int *cp, int bs, char t)
{
	char	*x;
	char	*xx;

	x = "0123456789abcdef";
	xx = "0123456789ABCDEF";
	if (nb < 0)
	{
		ft_putchar('-', cp);
		nb = nb * -1;
	}
	if (nb >= bs)
		ft_putnbr(nb / bs, cp, bs, t);
	if (t == 'x')
		ft_putchar(x[nb % bs], cp);
	else
		ft_putchar (xx[nb % bs], cp);
}

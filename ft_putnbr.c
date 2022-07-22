/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:26:19 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/07/22 16:19:59 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_countdigit(long long n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(long long ln, char c)
{
	int	i;

	i = 0;
	if (ln < 0)
	{
		if (c == 'd' || c == 'i')
		{
			ft_putchar('-');
			ln = -ln;
			i = 1;
		}
		else
			ln = UINT_MAX + ln + 1;
	}
	if (ln >= 10)
	{
		ft_putnbr(ln / 10, c);
		ft_putnbr(ln % 10, c);
	}
	else
		ft_putchar('0' + ln);
	return (ft_countdigit(ln) + i);
}

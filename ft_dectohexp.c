/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohexp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 19:52:49 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/07/22 20:50:55 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_countdigit(unsigned long long n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

static int	ft_putchar_hex(unsigned long long n, char x)
{
	char	c;

	if (n < 10)
		c = n + '0';
	else if (x == 'x')
		c = n + ('a' - 10);
	else if (x == 'X')
		c = n + ('A' - 10);
	write(1, &c, 1);
	return (1);
}

static int	ft_dectohex1(unsigned long long ln, char c)
{
	int	i;

	i = 0;
	if (ln < 0)
		ln = ULONG_MAX + ln + 1;
	if (ln > 16)
	{
		ft_dectohex(ln / 16, c);
		ft_dectohex(ln % 16, c);
	}
	else
		ft_putchar_hex(ln, c);
	return (ft_countdigit(ln));
}

int	ft_dectohexp(void *p, char c)
{
	if (!p)
		return (ft_putstr("0x0"));
	write(1, "0x", 2);
	return (ft_dectohex1(((unsigned long long)p), c) + 2);
}

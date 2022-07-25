/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohexp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 19:52:49 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/07/25 17:51:52 by jlopez-i         ###   ########.fr       */
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

static int	ft_putchar_hex(unsigned long long n)
{
	char	c;

	if (n < 10)
		c = n + '0';
	else
		c = n + ('a' - 10);
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

static int	ft_dectohex1(unsigned long long ln)
{
	if (ln >= 16)
	{
		if (ft_dectohex1(ln / 16) == -1)
			return (-1);
		ft_dectohex1(ln % 16);
	}
	else
		if (ft_putchar_hex(ln) == -1)
			return (-1);
	return (ft_countdigit(ln));
}

int	ft_dectohexp(void *p)
{
	if (!p)
		return (ft_putstr("0x0"));
	if (write(1, "0x", 2) == -1)
		return (-1);
	return (ft_dectohex1((unsigned long long)p) + 2);
}

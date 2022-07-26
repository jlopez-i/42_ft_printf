/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:14:42 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/07/26 15:34:55 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_countdigit(long long n)
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

static int	ft_putchar_hex(long long n, char x)
{
	char	c;

	if (n < 10)
		c = n + '0';
	else if (x == 'x')
		c = n + ('a' - 10);
	else if (x == 'X')
		c = n + ('A' - 10);
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

int	ft_dectohex(long long ln, char c)
{
	int	i;

	i = 0;
	if (ln < 0)
		ln = UINT_MAX + ln + 1;
	if (ln >= 16)
	{
		if (ft_dectohex(ln / 16, c) == -1)
			return (-1);
		ft_dectohex(ln % 16, c);
	}
	else
		if (ft_putchar_hex(ln, c) == -1)
			return (-1);
	return (ft_countdigit(ln));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:14:42 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/07/21 19:16:58 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_countdigit(long int n)
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

static int	ft_putchar_hex(int n, char x)
{
	char	c;

	if (n < 10)
		c = n + 48;
	else if (x == 'x')
		c = n + ('a' - 10);
	else if (x == 'X')
		c = n + ('A' - 10);
	write(1, &c, 1);
	return (1);
}

int	ft_dectohex(long int ln, char c)
{
	int	i;

	i = 0;
	if (ln < 0)
		ln = UINT_MAX + ln + 1;
	if (ln > 16)
	{
		ft_dectohex(ln / 16, c);
		ft_dectohex(ln % 16, c);
	}
	else
		ft_putchar_hex(ln, c);
	return (ft_countdigit(ln));
}

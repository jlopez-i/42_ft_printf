/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:37:32 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/07/20 20:52:30 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list args;
	int i;
	int count;

	va_start(args, fmt);
	i = 0;
	count = 0;
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			i++;
			count += ft_format(args, fmt[i]);
		}
		else 
			count += ft_putchar(fmt[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/*
int main()
{
	char c ='a';
	char *s = "hola";
	int d = INT_MAX;
	int i = INT_MIN;
	int u = 0;

	printf("Original printf: %d\n", printf("%c, %s, %d, %u, %i\n", c,s,d,u,i));
	printf("Mi printf: %d\n", ft_printf("%c, %s, %d, %u, %i\n", c,s,d,u,i));
	return (0);
}
*/

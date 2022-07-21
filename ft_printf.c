/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:37:32 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/07/21 19:22:58 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		i;
	int		count;

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
	int x1 = 2545;
	int X1 = -2545;
	int x2 = INT_MIN;
	int X2 = INT_MAX;
	int x3 = -111111;
	int X3 = 1111111;

	printf("Original printf: %d\n",\
   	printf("%c, %s, %d, %u, %i, %x, %X, %x, %X, %x, %X\n", \
	c,s,d,u,i,x1,X1,x2,X2,x3,X3));
	printf("Mi printf: %d\n",\
   	ft_printf("%c, %s, %d, %u, %i, %x, %X, %x, %X, %x, %X\n", \
	c,s,d,u,i,x1,X1,x2,X2,x3,X3));
	return (0);
}
*/

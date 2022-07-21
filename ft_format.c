/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:06:09 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/07/21 19:19:10 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_format(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
		return ((va_arg(args, unsigned long)));
	if (c == 'd')
		return (ft_putnbr(va_arg(args, int), c));
	if (c == 'i')
		return (ft_putnbr(va_arg(args, int), c));
	if (c == 'u')
		return (ft_putnbr(va_arg(args, unsigned int), c));
	if (c == 'x')
		return (ft_dectohex(va_arg(args, unsigned int), c));
	if (c == 'X')
		return (ft_dectohex(va_arg(args, unsigned int), c));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
/*Esta funcion compara el valor de c con los distintos formatos de variables
capaces de ser impresos por la funcion ft_printf.
Esta funcion devuelve la cantidad de caracteres a imprimir.*/

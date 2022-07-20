/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:06:09 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/07/20 20:19:41 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_format(va_list args, char c)
{
	if (c == 'c')
		return(ft_putchar(va_arg(args, int)));
	if (c == 's')
		return(ft_putstr(va_arg(args, char *)));
	if (c == 'p')									//The void * pointer argument hexadecimal format 0x11
		return((va_arg(args, unsigned long)));
	if (c == 'd')
		return(ft_putnbr(va_arg(args, int), c));
	if (c == 'i')
		return(ft_putnbr(va_arg(args, int), c));
	if (c == 'u')
		return(ft_putnbr(va_arg(args, unsigned int), c));
	if (c == 'x')		//Number in hexadecimal base16 lowercase format
		return((va_arg(args, unsigned int)));
	if (c == 'X')		//Number in hexadecimal base16 uppercase format
		return((va_arg(args, unsigned int)));
	if (c == '%')		//A percent sign
		return(ft_putchar('%'));
	return (0);
}
/*Esta funcion compara el valor de c con los distintos formatos de variables
capaces de ser impresos por la funcion ft_printf.
Esta funcion devuelve la cantidad de caracteres a imprimir.*/

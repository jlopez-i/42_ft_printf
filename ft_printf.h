/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:28:48 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/07/26 15:32:52 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>

int			ft_printf(const char *fmt, ...);
int			ft_format(va_list args, char c);
int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_putnbr(long long ln, char c);
int			ft_dectohex(long long ln, char c);
int			ft_dectohexp(void *p);

#endif

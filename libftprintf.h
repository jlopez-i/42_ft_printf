/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:18:43 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/07/21 19:07:26 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>

int			ft_format(va_list args, char c);
int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_putnbr(long int ln, char c);
int			ft_dectohex(long int ln, char c);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:18:43 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/07/20 20:37:54 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

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
//in				ft_countdigit(long int n);
/*int				ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
size_t				ft_strlen(const char *s);
void				ft_bzero(void *s, size_t n);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
int					ft_atoi(const char *str);
char				*ft_strdup(const char *s1);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putendl(char *s);
*/
#endif

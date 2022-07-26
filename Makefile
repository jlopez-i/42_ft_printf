# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 20:26:54 by jlopez-i          #+#    #+#              #
#    Updated: 2022/07/26 15:35:45 by jlopez-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
C_FLAGS	= -Wall -Werror -Wextra
CC 		= cc
RM		= rm -f
HEAD	= ft_printf.h

SRCS	= ft_printf.c\
	ft_format.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_dectohex.c\
	ft_dectohexp.c\

OBJS	= $(SRCS:.c=.o)

%.o: %.c $(HEAD)
	$(CC) $(C_FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEAD)
	ar -rsc $@ $^
	@echo Printf library created!

fclean: clean
	@$(RM) $(NAME) 
clean:
	@$(RM) $(OBJS)
	@echo All clean!

re: fclean
	$(MAKE) all

.PHONY: all fclean clean re

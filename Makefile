# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 20:26:54 by jlopez-i          #+#    #+#              #
#    Updated: 2022/07/21 19:09:13 by jlopez-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
C_FLAGS	= -Wall -Werror -Wextra
CC 		= cc
RM		= rm -f
HEAD	= libftprintf.h

SRCS	= ft_printf.c\
	ft_format.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_dectohex.c\

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

.PHONY: all fclean fclean re 

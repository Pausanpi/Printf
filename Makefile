# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 10:41:33 by pausanch          #+#    #+#              #
#    Updated: 2023/10/11 11:27:59 by pausanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCE = ft_decimal.c\
	ft_hexa.c\
	ft_pointer.c\
	ft_printf.c\
	ft_putchar.c\
	ft_string.c\
	ft_unsigned.c
	
OBJ = $(SOURCE:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LIB = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	@$(LIB) $(NAME) $(OBJ)

%.o:	%.c
	@printf "\e[38;5;211mCompilinge \e[38;5;122m$<\e[0m\n"
	@gcc $(CFLAGS) -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean
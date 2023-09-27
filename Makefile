# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 10:41:33 by pausanch          #+#    #+#              #
#    Updated: 2023/09/27 10:52:03 by pausanch         ###   ########.fr        #
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
	$(LIB) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean
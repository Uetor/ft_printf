# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pedrogon <pedrogon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 19:46:27 by pedrogon          #+#    #+#              #
#    Updated: 2023/07/19 19:33:08 by pedrogon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c ft_putchar.c ft_pointer.c ft_putstr.c ft_decimal.c \
ft_unsigned_int.c hexalower.c hexauper.c

OBJS = $(SRC:.c=.o) 
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

$(NAME) :
	$(CC) -c $(CFLAGS) $(SRC)
	ar cr $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all

.PHONY : all clean fclean re

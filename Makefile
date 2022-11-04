# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytaqsi <ytaqsi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 15:15:43 by ytaqsi            #+#    #+#              #
#    Updated: 2022/11/01 16:08:14 by ytaqsi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCMAN = ft_printf.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putstr.c \
	checkcspdiux.c \
	ft_putp.c \

OBJMAN = $(SRCMAN:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar cr
FRM = rm -rf

NAME = libftprintf.a
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJMAN)
	$(AR) $(NAME) $(OBJMAN)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $<

clean:
	$(FRM) $(OBJMAN)

fclean: clean
	$(FRM) $(NAME)

re: fclean all

#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/25 10:38:16 by rdestreb          #+#    #+#              #
#    Updated: 2015/02/04 11:53:24 by rdestreb         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libftprintf.a
SRCDIR = ./
HEADDIR = ./
HEAD = ft_printf.h
HEADFILES = $(addprefix $(HEADDIR)/, $(HEAD))
SCRFILES = $(addprefix $(SRCDIR)/, $(SRC))
SRC =	main.c \

OBJS = $(SCRFILES:.c=.o)
CC = gcc
CFLAGS = -g -Wall -Werror -Wextra
LDFLAGS = -L ./libft/ -lft
LIBFT = ./libft/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

$(LIBFT):
	$(MAKE) -C ./libft/

%.o: %.c $(HEADERFILES)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(MAKE) -C ./libft/ $@
	/bin/rm -f $(OBJS)

fclean: clean
	$(MAKE) -C ./libft/ $@
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

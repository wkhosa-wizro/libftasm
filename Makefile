# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/30 10:19:01 by wkhosa            #+#    #+#              #
#    Updated: 2018/07/24 16:25:31 by wkhosa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

CC = nasm

CFLAGS = -f macho64
#CFLAGS	= -g -f elf64
SRCDIR = .

#TSRC = main_test.c

#TOBJ = main_test.o

SRC = 	ft_isalpha.s \
		ft_isalnum.s \
		ft_isdigit.s \
		ft_isupper.s \
		ft_islower.s \
		ft_isascii.s \
		ft_isprint.s \
		ft_toupper.s \
		ft_tolower.s \
		ft_strlen.s \
		ft_strcat.s	\
		ft_bzero.s	\
		ft_memcpy.s \
		ft_memset.s \
		ft_puts.s	\
		ft_strdup.s \
		ft_cat.s	\

OBJ = 	$(SRC:.s=.o)

$(NAME) : $(OBJ)

$(OBJ) : $(SRC)

$(OBJ):
		$(CC) $(CFLAGS) $*.s

all: $(NAME)

$(NAME):
		make -C test fclean
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

test: $(OBJ)
		make -C test fclean && make -C test

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

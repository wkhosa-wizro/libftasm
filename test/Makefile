# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/30 10:19:01 by wkhosa            #+#    #+#              #
#    Updated: 2018/07/24 11:56:22 by wkhosa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

CC = gcc

#CFLAGS = -f macho64
CFLAGS	= -g -c

SRCDIR = .

#TSRC = main_test.c

#TOBJ = main_test.o

SRC = 	main.c			\
		test_isalpha.c \
		test_isalnum.c \
		test_isdigit.c \
		test_isupper.c \
		test_islower.c \
		test_isascii.c \
		test_isprint.c \
		test_toupper.c \
		test_tolower.c \
		test_strlen.c \
		test_strcat.c	\
		test_bzero.c	\
		test_memcpy.c \
		test_memset.c \
		test_puts.c	\
		test_strdup.c \
		test_cat.c	\

OBJ = 	$(SRC:.c=.o)

$(NAME) : $(OBJ)

$(OBJ) : $(SRC)

$(OBJ):
		$(CC) $(CFLAGS) $*.c

all: $(NAME) $(OBJ)

$(NAME):
			gcc -g -c main.c -o main.o
			gcc -g  $(OBJ) -L ../ -lfts -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean: clean
			rm -rf $(NAME)

re: fclean all

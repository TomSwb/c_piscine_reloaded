# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/31 15:06:33 by tomswb            #+#    #+#              #
#    Updated: 2026/08/31 15:06:36 by tomswb           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I includes

AR = ar -rcs

RM = rm -f

SOURCES = srcs/ft_puchar.c \
	srcs/ft_putstr.c \
	srcs/ft_strlen.c \
	srcs/ft_strcmp.c \
	srcs/ft_swap.c

OBJECTS = $(SOURCES:.c=.o)

%.o: %.c
	${CC} {CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJECTS}
	${AR} ${NAME} ${OBJECTS}

clean: 
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: flcean all

.PHONY all clean fclean re

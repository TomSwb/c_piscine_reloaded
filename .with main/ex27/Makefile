NAME = ft_display_file

SOURCES = ./ft_display_file.c

OBJECTS = $(SOURCES:.c=.o)

RM = rm -f

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I includes

all: $(NAME)

$(NAME): $(OBJECTS)
	 ${CC} ${CFLAGS} ${OBJECTS} -o ${NAME} 

clean: 
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}
	
re:	fclean all

.PHONY: all clean fclean re

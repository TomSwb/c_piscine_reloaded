
NAME: libft.a

SOURCES: sources/ft_puchar.c \
				sources/ft_putstr.c \
				sources/ft_strlen.c \
				sources/ft_strcmp.c \
				sources/ft_swap.c

INCLUDES: includes/libft.h

AR: ar -r

OBJECTS: 

all: {NAME}

{NAME}: {OBJECTS}
				{AR} 

clean: rm sources/*.o

fclean: clean
				rm {NAME}

re: flcean all

.PHONY all clean fclean re
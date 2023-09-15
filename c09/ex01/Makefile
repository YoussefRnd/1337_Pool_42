CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

SRC			= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS		= ${SRC:.c=.o}

HEAD		= includes

NAME		= libft.a

LIB			= ranlib

all:		${NAME}

.c.o:
	${CC} ${CFLAGS} -c -I${HEAD} $< -o $@

${NAME}:	${OBJS}
	ar rcs ${NAME} ${OBJS} && ${LIB} ${NAME}

clean:
	@rm -f ${OBJS}

fclean:	clean
	@rm -f ${NAME}

re:	fclean all

.PHONY:		all clean fclean re



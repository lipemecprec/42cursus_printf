NAME = libftprintf.a
CC = clang
FLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c	ft_puthex_fd.c	ft_putaddress_fd.c	ft_validation.c ft_chrjoin.c	ft_putnbr.c
LIB = libftprintf.h
OBJ = ${SRC:%.c=%.o}

all: ${NAME}

${NAME}:  ${OBJ}
	make -C libft
	ar rc ${NAME} ${OBJ}

${OBJ}: ${SRC}
	${CC} -c ${FLAGS} ${SRC}

clean:
	rm -rf *.o

fclean: clean
	rm ${NAME}

re: fclean all

bonus:

rebonus: fclean bonus

.PHONY: all clear fclean re bonus rebonus

run: fclean all
	@${CC} ${NAME} ${OBJ} libft/*.o main.c -o printf && ./printf

debug:
	${CC} ${FLAGS} -lbsd -g -Og -std=c99 -pedantic -Wconversion -g3 -DDEBUG main.c -lft -L ./libft -lftprintf -L . -o debug && ./debug
	valgrind --leak-check=full --show-reachable=yes --track-origins=yes -s ./debug

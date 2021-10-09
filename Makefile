NAME = libftprintf.a
LIBFTPRINTF = ./srcs/libftprintf.h
LIBFT = ./libft/libft.a
CC = clang
FLAGS = -Wall -Wextra -Werror
SRC = *.c
OBJ = ${SRC:.c=.o}

all: ${NAME}

${NAME}:  ${OBJ} ${LIBFT}
	ar rc ${NAME} ${OBJ}

${LIBFT}:
	make -C libft

${OBJ}: ${SRC}
	${CC} -c ${FLAGS} srcs/${SRC}

clean:
	rm -rf ${OBJS}

fclean: clean
	make fclean -C libft
	rm ${NAME}

re: fclean all

bonus:

rebonus: fclean bonus

.PHONY: all clear fclean re bonus rebonus

run: fclean all
	@${CC} ${NAME} ${OBJ} libft/*.o main.c -o printf && ./printf

debug:
	${CC} -lbsd -g -Og -std=c99 -pedantic -Wconversion -g3 -DDEBUG -o debug main.c -lft -L ./libft -lftprintf -L . && ./debug
	valgrind --leak-check=full --show-reachable=yes --track-origins=yes -s ./debug

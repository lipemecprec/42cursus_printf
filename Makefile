NAME = libftprintf.a
LIBFTPRINTF = ./srcs/libftprintf.h

LIBFT_PATH = ./libft
LIBFT = ${LIBFT_PATH}/libft.a

CC = clang
FLAGS = -fPIE -Wall -Wextra -Werror
INCLUDE = -I${LIBFT_PATH}
LIB_FLAGS = -L{LIBFT_PATH} -lft

SRC_PATH = ./srcs
SRC = ${SRC_PATH}/ft_printf.c ${SRC_PATH}/ft_chrjoin.c ${SRC_PATH}/ft_putaddress.c ${SRC_PATH}/ft_putchar.c \
 ${SRC_PATH}/ft_puthex.c ${SRC_PATH}/ft_putnbr.c ${SRC_PATH}/ft_putstr.c ${SRC_PATH}/ft_putunbr.c

OBJ = ${SRC:%.c=%.o}

all: ${NAME}

${NAME}:  ${OBJ} ${LIBFT}
	ar rc ${NAME} ${OBJ}

${LIBFT}:
	make -C libft
	cp ${LIBFT} ${NAME}

.c.o:
	${CC} ${FLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

clean:
	make clean -C libft
	rm -rf ${OBJ}

fclean: clean
	make fclean -C libft
	rm ${NAME}

re: fclean all

bonus:

rebonus: fclean bonus

.PHONY: all clear fclean re bonus rebonus

run: all
	@gcc -fPIE main.c -c -o main.o
	@gcc main.o -L. -lftprintf -o printf && ./printf

debug:
	${CC} -lbsd -g -Og -std=c99 -pedantic -Wconversion -g3 -DDEBUG -o debug main.c -lft -L ./libft -lftprintf -L . && ./debug
	valgrind --leak-check=full --show-reachable=yes --track-origins=yes -s ./debug

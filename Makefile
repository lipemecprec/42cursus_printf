NAME = libftprintf.a

LIB_PATH = ./include
LIBFT = ./libft/libft.a
LIBFTPRINTF = ${LIB_PATH}/libftprintf.h
LIBS = -lftprintf

CC = clang
FLAGS = -Wall -Wextra -Werror
# FLAGS = -fPIE -w -fmax-errors=1
INCLUDE = -I ${LIB_PATH}

SRC_PATH = ./srcs
SRC = ${SRC_PATH}/ft_printf.c ${SRC_PATH}/ft_chrjoin.c \
 ${SRC_PATH}/ft_putaddress.c ${SRC_PATH}/ft_putchar.c \
 ${SRC_PATH}/ft_puthex.c ${SRC_PATH}/ft_putnbr.c \
 ${SRC_PATH}/ft_putstr.c ${SRC_PATH}/ft_putunbr.c

OBJ = ${SRC:%.c=%.o}

all: ${NAME}

${NAME}:  ${OBJ} ${LIBFT}
	ar rc ${NAME} ${OBJ}

${LIBFT}:
	make -C libft
	cp ${LIBFT} ${NAME}

.c.o:
	${CC} -c ${FLAGS} $< -o ${<:.c=.o} ${INCLUDE}

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
	@gcc main.c ${LIBS} -o main ${INCLUDE} -L . && ./main

debug:
	${CC} -lbsd -g -Og -std=c99 -pedantic -Wconversion -g3 -DDEBUG -o debug main.c -lft -L ./libft -lftprintf -L . && ./debug
	valgrind --leak-check=full --show-reachable=yes --track-origins=yes -s ./debug

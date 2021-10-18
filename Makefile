NAME = libftprintf.a

LIB_PATH = ./include
LIBFT = ./libft/libft.a
LIBFTPRINTF = ${LIB_PATH}/libftprintf.h
LIBS = -lftprintf

CC = clang
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I ${LIB_PATH}

SRCS_PATH = ./srcs
SRCS = 	${SRCS_PATH}/ft_printf.c \
		${SRCS_PATH}/ft_charsjoin.c \
		${SRCS_PATH}/ft_ctoa.c \
		${SRCS_PATH}/ft_chrjoin.c \
		${SRCS_PATH}/ft_itoa_base.c \
		${SRCS_PATH}/ft_printf_utils.c \
		${SRCS_PATH}/ft_ptoa.c \
		${SRCS_PATH}/ft_stoa.c 

OBJS = ${SRCS:%.c=%.o}

all: ${NAME}

${NAME}: ${OBJS} ${LIBFT}
	ar rc ${NAME} ${OBJS}

${LIBFT}:
	make -C libft
	cp ${LIBFT} ${NAME}

.c.o:
	${CC} -c ${FLAGS} $< -o ${<:.c=.o} ${INCLUDE}

clean:
	make clean -C libft
	rm -rf ${OBJS}

fclean: clean
	make fclean -C libft
	rm ${NAME}

re: fclean all

.PHONY: all clear fclean re bonus rebonus

run:
	gcc ${SRCS} main.c libft/*.c -I ./include && ./a.out | cat -e
	@# ${CC} ${FLAGS} main.c ${SRCS} ${INCLUDE} && ./a.out

debug:
	${CC} -lbsd -g -Og -std=c99 -pedantic -Wconversion -g3 -DDEBUG -o debug main.c -lft -L ./libft -lftprintf -L . && ./debug
	valgrind --leak-check=full --show-reachable=yes --track-origins=yes -s ./debug
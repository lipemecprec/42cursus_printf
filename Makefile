NAME = libftprintf.a
CC = clang
FLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c
LIB = libftprintf.h
OBJ = ${SRC:%.c=%.o}

all: ${NAME}

${NAME}: ${OBJ} ${LIB}
	@ar rc ${NAME} ${OBJ}

${OBJ}: ${SRC} subsystem
	@${CC} -I . -c ${FLAGS} ${SRC}

clean:
	@rm -rf *.o

fclean: clean
	@rm ${NAME}

re: fclean all

subsystem:
	@cd libft && $(MAKE)

bonus:

rebonus: fclean bonus

.PHONY: ${NAME} all clear fclean re bonus rebonus

run: fclean all
	@${CC} ${NAME} ${OBJ} libft/*.o main.c -o printf && ./printf

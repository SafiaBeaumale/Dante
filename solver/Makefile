##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile for the solver files
##

CC = gcc

src =	lib/set_char_to_array.c	\
		lib/compare_str.c	\
		lib/concat_str.c	\
		lib/my_getnbr.c	\
		lib/my_putchar.c	\
		lib/my_put_nbr.c	\
		lib/my_putstr.c	\
		lib/my_strlen.c	\
		error_handling.c	\
		data.c	\
		main.c

NAME = solver

OBJ = ${src:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	gcc -o ${NAME} ${OBJ}
all : ${NAME}

clean :
	rm -rf ${OBJ}
fclean : clean
	rm -rf ${NAME}

re : fclean all

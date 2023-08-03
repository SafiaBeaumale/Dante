##
## EPITECH PROJECT, 2023
## generator
## File description:
## Makefile
##

CC = gcc

src =	main.c	\
		errors/handle_error.c	\
		errors/error_main.c	\
		errors/error_1.c	\
		errors/error_2.c	\
		errors/error_3.c	\
		inits/init_struct.c	\
		inits/init_gen.c	\
		gen/perfect.c	\
		gen/open_maze.c	\
		utils/is_digits.c	\
		utils/my_get_nbr.c	\
		utils/write_error.c	\
		utils/my_compare.c	\

NAME = generator

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

##
## EPITECH PROJECT, 2023
## B-CPE-200-LYN-2-1-dante-marie.loeffer
## File description:
## Makefile
##

GENERATOR =	generator/

SOLVER	=	solver/

all	:	$(OBJ)
		make -C $(GENERATOR)
		make -C $(SOLVER)

clean	:
		make clean -C $(GENERATOR)
		make clean -C $(SOLVER)

fclean	:	clean
		make fclean -C $(GENERATOR)
		make fclean -C $(SOLVER)

re	:	fclean all

.PHONY	:	all clean fclean re

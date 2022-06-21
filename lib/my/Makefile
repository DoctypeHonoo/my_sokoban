##
## EPITECH PROJECT, 2022
## B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
## File description:
## Makefile
##

AR				=	ar
ARFLAGS			=	rsc libmy.a *.o

all: make_lib

make_lib:
	@$(CC) *.c -c
	@$(AR) $(ARFLAGS)
	@cp libmy.a ../libmy.a
	@echo "LIB Done"

clean:
	@$(RM) *.o
	@echo "clean LIB Done"

fclean: clean
	@$(RM) ../libmy.a
	@$(RM) libmy.a
	@echo "fclean LIB Done"

re: fclean all

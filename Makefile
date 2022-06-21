##
## EPITECH PROJECT, 2022
## B-PSU-200-MPL-2-1-mysokoban-guillaume.lemoine
## File description:
## Makefile
##

SRC	=		$(wildcard *.c)

OBJ =		$(SRC:.c=.o)

BIN =		my_sokoban

CFLAGS = 	-W -Wall -Wextra -Werror -Iinclude/

LIB = 		./lib/libmy.a

all: $(BIN)

$(BIN): $(OBJ) $(LIB)
	@$(CC) $(OBJ) -o $(BIN) -lncurses -L./lib -lmy
	@echo "Program Compiled"

$(LIB):
	make -C ./lib/my

clean:
	@make clean -C ./lib/my
	@$(RM) $(OBJ)
	@echo "clean done"

fclean:	clean
	@make -C ./lib/my/ fclean
	@$(RM) $(BIN)
	@$(RM) $(LIB)
	@echo "fclean done"

re: fclean all

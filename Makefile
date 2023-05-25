##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile for *project name*
##

NAME = executable_name

SRC = sources/main.c \
      sources/algo/handler.c \
      sources/errors/errors.c \
      sources/utils/init.c \
      sources/utils/getters.c \
      sources/utils/utils.c \
      sources/utils/free.c

OBJ = $(SRC:.c=.o)
.SILENT:$(OBJ)

CFLAGS = -W -Wall -Wextra -g3

LIBFLAGS = -L./lib -lm

all: $(NAME)

.SILENT:$(NAME)
$(NAME): $(OBJ)
	@echo "\033[0;32m launching main compilation \033[0m"
	make -C lib
	gcc $(SRC) -o $(NAME) $(CFLAGS) $(LIBFLAGS)
	rm -f $(OBJ)
	@echo "\033[0;32m main compilation done ! \033[0m"

clean:
	@echo "\033[0;32m launching make clean \033[0m"
	make clean -C lib
	rm -f $(OBJ)
	@echo "\033[0;32m make clean compilation done ! \033[0m"

fclean: clean
	make fclean -C lib
	rm -f $(NAME_LIB)

re: fclean all
	@echo "\033[0;31m make re compilation done ! \033[0m"

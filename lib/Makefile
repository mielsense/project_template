##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makfile for the lib
##

SRC = sources/getters/mstrlen.c \
	sources/printing/mputchar.c \
	sources/printing/mput_nbr.c \
	sources/string/mstrcmp.c \
	sources/string/mstrncmp.c \
	sources/printing/mputstr.c \
	sources/getters/matoi.c \
	sources/string/mstrcpy.c \
	sources/string/mstrcat.c \
	sources/string/mstrncpy.c \
	sources/string/mstrncat.c \
	sources/string/mstrdup.c \
	sources/string/mstrndup.c \
	sources/string/mrevstr.c \
	sources/string/mstrtrim.c \
	sources/lists/mlistconvert.c \
	sources/lists/mlistgetters.c \
	sources/lists/mlistutils.c \
	sources/checkers/misnum.c \
	sources/checkers/misascii.c \
	sources/getters/mgetline.c \
	sources/getters/mgetsize.c \
	sources/getters/mcopy.c \
	sources/file/mffile.c \
	sources/checkers/misalpha.c \
	sources/checkers/mgrep.c \
	sources/string/msplit.c \
	sources/string/msscanf.c \
	sources/memory/mmemset.c \
	sources/memory/mfree.c \
	sources/printing/merror.c \
	sources/printing/mdisplay.c \
	sources/printing/mprintf.c

OBJ = $(SRC:.c=.o)
.SILENT:$(OBJ)

NAME_LIB = libm.a

all: $(NAME_LIB)

.SILENT:$(NAME_LIB)
$(NAME_LIB): $(OBJ)
	ar rc $(NAME_LIB) $(OBJ)
	rm -f $(OBJ)
	@echo "\x1b[1m\x1b[36m -> library compilation done \033[0m"

.SILENT:clean
clean:
	rm -f $(OBJ)
	@echo "\x1b[1m\x1b[36m -> lib clean done \033[0m"

.SILENT:fclean
fclean: clean
	rm -f $(NAME_LIB)
	@echo "\x1b[1m\x1b[36m -> library fclean done \033[0m"

re: fclean all

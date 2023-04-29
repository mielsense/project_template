##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makfile for the lib
##

SRC = my/getters/my_strlen.c \
	my/printing/my_putchar.c \
	my/printing/my_put_nbr.c \
	my/string/my_strcmp.c \
	my/string/my_strncmp.c \
	my/printing/my_putstr.c \
	my/getters/my_getnbr.c \
	my/string/my_strcpy.c \
	my/string/my_strcat.c \
	my/string/my_strncpy.c \
	my/string/my_strncat.c \
	my/string/my_strdup.c \
	my/string/my_strndup.c \
	my/string/my_revstr.c \
	my/string/my_strtrim.c \
	my/checkers/my_isnum.c \
	my/checkers/my_isascii.c \
	my/file/fline.c \
	my/file/futils.c \
	my/checkers/my_isalpha.c \
	my/checkers/my_grep.c \
	my/string/my_str_to_word_array.c \
	my/printing/my_error_output.c \
	printf/my_printf.c \
	printf/my_putdouble.c \
	printf/my_putlong.c \
	printf/my_octal.c \
	printf/my_high_hexa.c \
	printf/my_low_hexa.c \
	printf/my_putptr.c \
	printf/my_binary.c \
	printf/my_nonprintable_char.c

OBJ = $(SRC:.c=.o)
.SILENT:$(OBJ)

NAME_LIB = libmy.a

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

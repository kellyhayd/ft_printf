NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Werror -Wextra

HEADER = ft_printf.h

SRC = ./src/ft_printf.c \
	./src/ft_printf_utils.c \
	./src/print_hex.c \
	./src/print_char.c \
	./src/print_num.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@
	ar -rcs $(NAME) $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

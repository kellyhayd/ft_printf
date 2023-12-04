NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Werror - Wextra

HEADER = ft_printf.h

SRC = /SRC/ft_printf.c
	/SRC/ft_printf_utils.c
	/SRC/ft_printhex.c

OBJ = /OBJ/$(SRC:%.c=%.o)

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

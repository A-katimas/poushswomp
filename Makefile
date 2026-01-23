NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3 -I librairie -I libft

LIBFT = libft/libft.a

TOOLS_SRC = tools/swap.c tools/push.c tools/rotation.c \
			tools/reverserota.c tools/ft_use.c tools/utils.c tools/use.c

ORDERS_SRC = orders/chunk_sort.c orders/chosetri.c

MAIN_SRC = pushswap.c

ALL_SRC = $(TOOLS_SRC) $(ORDERS_SRC) $(MAIN_SRC)

OBJ = $(ALL_SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) main.c $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C libft

test: re
	./$(NAME) 35 654 23 72 1 3 367 786 32 5 4864 321 56 78 465

clean:
	rm -rf $(OBJ)
	make -C libft clean

fclean: clean
	rm -rf $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: test all clean fclean re
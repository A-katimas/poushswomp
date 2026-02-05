NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -I librairie -I libft

LIBFT = libft/libft.a

TOOLS_SRC = tools/swap.c tools/push.c tools/rotation.c \
			tools/reverserota.c tools/lst_utils.c tools/utils.c tools/use.c tools/benchmarck.c tools/intisialisation_tool.c


ORDERS_SRC = orders/chunk_sort.c orders/chosetri.c orders/chunk_sort_utils.c \
		orders/chunk_sort_utils2.c orders/sort_three.c orders/radix_lsb.c

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
NAME = pushswap.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3

LIBFT = libft/libft.a
TOOLS = tools/tools.a
ORDER = orders/order.a

SOURCE =	pushswap.c \
			resolution.c \

OBJ = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(TOOLS) $(ORDER) $(OBJ)
	ar x $(LIBFT)
	ar x $(TOOLS)
	ar x $(ORDER)
	ar -rcs $@ $(OBJ) *.o
	rm -f *.o

$(LIBFT):
	make -C libft

$(TOOLS):
	make -C tools

$(ORDER):
	make -C orders

test: re
	cc $(CFLAGS) main.c $(NAME)
	make clean
	./a.out
clean:
	rm -rf $(OBJ)
	make -C libft clean
	make -C tools clean
	make -C orders clean

fclean: clean
	rm -rf $(NAME)
	make -C libft fclean
	make -C tools fclean
	make -C orders fclean

re: fclean all

.PHONY :test all clean fclean re
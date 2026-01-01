NAME = pushswap.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3

LIBFT = libft/libft.a
TOOLS = tools/tools.a

SOURCE =	pushswap.c \
			resolution.c \

OBJ = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(TOOLS) $(OBJ)
	ar x $(LIBFT)
	ar x $(TOOLS)
	ar -rcs $@ $(OBJ) *.o
	rm -f *.o

$(LIBFT):
	make -C libft

$(TOOLS):
	make -C tools

clean:
	rm -rf $(OBJ)
	make -C libft clean
	make -C tools clean

fclean: clean
	rm -rf $(NAME)
	make -C libft fclean
	make -C tools fclean

re: fclean all

.PHONY : all clean fclean re
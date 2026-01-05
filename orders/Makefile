NAME = order.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3

SOURCE =	bubul.c \

OBJ = $(SOURCE:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all bonus clean fclean re

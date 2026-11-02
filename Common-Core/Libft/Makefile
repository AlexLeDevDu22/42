NAME = libft.a
CC = cc
INC_DIR = includes/
CFLAGS = -Wall -Wextra -Werror -I $(INC_DIR)

SRCS = is.c ......  $(wildcard main.c)

OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all
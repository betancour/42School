NAME = ft_tail
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_tail.c ft_putchar.c ft_atoi.c ft_strlen.c ft_strcpy.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

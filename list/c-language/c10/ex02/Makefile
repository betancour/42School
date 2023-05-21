CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_cat.c
OBJS = $(SRCS:.c=.o)
TARGET = ft_cat

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re

NAME := ft_cat
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
LFLAGS = -Wall -Wextra -Werror -o
SRC_DIR := 	./srcs/
OBJ_DIR = 	./obj/
SRC_FILES := 	ft_display_custom_error.c \
				ft_display_file.c \
				ft_get_strerr.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_stdin.c \
				ft_cat.c \
				main.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR), $(OBJ_FILES))
HEADER := -I includes/
RM := rm -rf

all: obj $(NAME)

obj: $(SRCS)
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $< -o $@ $(HEADER)

$(NAME): $(OBJS)
	$(CC) $(LFLAGS) $(NAME) $(OBJS) $(HEADER)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

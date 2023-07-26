NAME := ft_tail
CC := gcc
CFLAGS := -Wall -Werror -Wextra -c
LFLAGS := -Wall -Werror -Wextra -o
SRC_DIR := ./srcs/
OBJ_DIR := ./obj/
SRC_FILES := ft_display_custom_error.c \
             ft_atoi.c \
             ft_get_strerr.c \
             ft_stdin.c \
             ft_putchar.c \
             ft_putstr.c \
             ft_size_file.c \
             ft_print_name.c \
             ft_display_file.c \
             ft_tail.c \
             main.c
OBJ_FILES := $(SRC_FILES:.c=.o)
SRCS := $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS := $(addprefix $(OBJ_DIR), $(OBJ_FILES))
HEADER := -I includes/
RM := rm -rf

all: obj $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $< -o $@ $(HEADER)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LFLAGS) $(NAME) $(HEADER)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

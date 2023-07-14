NAME = libft.a

SRCS_DIR = srcs
INCL_DIR = includes

SRCS_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS_FILES = $(SRCS_FILES:.c=.o)

SRCS = $(addprefix $(SRCS_DIR)/,$(SRCS_FILES))
OBJS = $(addprefix $(SRCS_DIR)/,$(OBJS_FILES))
INCL = $(addprefix $(INCL_DIR)/,$(INCL_FILES))

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c $(INCL)
	@$(CC) $(CFLAGS) -I$(INCL_DIR) -c $< -o $@
	@echo "Compiled $< into $@"

clean:
	@rm -f $(OBJS)
	@echo "Removed object files."

fclean: clean
	@rm -f $(NAME)
	@echo "Removed $(NAME) library."

re: fclean all

.PHONY: all clean fclean re

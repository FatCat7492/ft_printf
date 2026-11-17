NAME = libftprintf.a

CC = cc

INCLUDES = -Ilibft

LIBFT_DIR = libft

CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

SRCS = ft_printf.c ft_print_functions.c ft_print_functions_2.c

RM = rm -f

OBJS = $(SRCS:.c=.o)

all: libft $(NAME)

libft:
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT_DIR)/libft.a
	cp $(LIBFT_DIR)/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re libft

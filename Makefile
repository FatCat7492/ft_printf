NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I../libft

LIBFT_DIR = ../libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT) .
	ar rcs $(NAME) $(OBJS)
	ar rcs $(NAME) libft.a

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME) libft.a
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

CC = cc
CLAGS = -Wextra -Werror -Wall
NAME = libftprintf.a

SRCS = 


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(CLAGS) -c &< -o $@

clean:
		rm -f $(OBJS)

fclean: rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
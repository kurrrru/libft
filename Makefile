SRCS	= $(wildcard ft_*.c)
NAME	= libft.a
OBJS	= $(SRCS:.c=.o)
CC		= cc
CFLAG	= -Wall -Wextra -Werror
INCL	= includes

.DEFAULT_GOAL := all

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAG) -I$(INCL) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(OBJS) $(NAME) 

.PHONY: all clean fclean re

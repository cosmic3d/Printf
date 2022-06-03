NAME	= libftprintf.a

CFLAGS	= -Wall -Wextra -Werror

SRCS = ft_printf.c

OBJ		= $(SRCS:.c=.o)

RM		= rm -rf

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) libftprintf.h
	ar -crs $(NAME) $(OBJ)
bonus: $(OBJ2)
	ar -crs $(NAME)
	touch $@
clean:
	rm -f $(OBJ)

fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re

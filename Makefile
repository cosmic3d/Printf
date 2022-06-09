NAME	= libftprintf.a

CFLAGS	= -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_strdup.c ft_itoa.c ft_print_char.c ft_print_str.c ft_printf.c ft_print_int.c ft_print_hexlow.c ft_print_hexupp.c ft_print_ptr.c ft_print_unsigned.c

OBJ		= $(SRCS:.c=.o)

RM		= rm -rf

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) libftprintf.h
	ar -crs $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)

fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re

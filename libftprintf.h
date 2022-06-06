#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "libft.h"
# include <stdarg.h>

int	ft_printf(char const *, ...);
int	ft_print_str(char *str);
int ft_print_int(int i);
int	ft_print_hexlow(int dec);
int	ft_print_hexupp(int dec);
int	ft_print_ptr(int ptr);
int ft_print_unsigned(unsigned int i);
#endif

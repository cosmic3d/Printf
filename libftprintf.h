/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:19:44 by jenavarr          #+#    #+#             */
/*   Updated: 2022/06/09 21:19:49 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "libft.h"
# include <stdarg.h>

int	ft_printf(char const *, ...);
int	ft_print_str(char *str);
int ft_print_int(int i);
int	ft_print_hexlow(unsigned long dec);
int	ft_print_hexupp(unsigned long dec);
int	ft_print_ptr(void *ptr);
int ft_print_unsigned(unsigned int i);
int	ft_print_char(char c);

#endif

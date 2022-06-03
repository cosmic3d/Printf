/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:52:59 by jenavarr          #+#    #+#             */
/*   Updated: 2022/06/01 18:57:12 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	get_type(char c, va_list lst)
{
	if (c == 's')
		return (ft_print_str(va_arg(lst, char *)));
	else if (c == 'i' || c == 'd')
		return (ft_print_int(va_arg(lst, int)));
//	else if (c == 'p')
//		return (ft_print_ptr(va_arg(lst, void *)));
	return (0);
}

int	ft_printf(char const *str,...)
{
	va_list lst;
	int	i;
	int	len;

	len = 0;
	i = 0;
	va_start(lst, str);
	while (str[i])
	{
		if (str[i] == '%' || (str[i] == '%' && str[i + 1] != 'c'))
		{
			i++;
			len += get_type(str[i], lst);
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(lst);
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:11:16 by jenavarr          #+#    #+#             */
/*   Updated: 2022/06/06 20:11:21 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <limits.h>

int	ft_print_unsigned(unsigned int i)
{
	int	len;

	len = 0;
	if (i >= 10)
	{
		len += ft_print_unsigned(i / 10);
		len += ft_print_unsigned(i % 10);
	}
	else
		len += ft_print_char(i + '0');
	return (len);
}

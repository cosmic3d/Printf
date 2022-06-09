/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexlow.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:01:47 by jenavarr          #+#    #+#             */
/*   Updated: 2022/06/06 18:02:58 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_hexlow(unsigned long dec)
{
	int	len;

	len = 0;
	if (dec >= 16)
	{
		len += ft_print_hexlow(dec / 16);
		len += ft_print_hexlow(dec % 16);
	}
	else
	{
		len += write(1, &"0123456789abcdef"[dec], 1);
	}
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexupp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:29:52 by jenavarr          #+#    #+#             */
/*   Updated: 2022/06/06 18:29:57 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_hexupp(unsigned long dec)
{
	int	len;

	len = 0;
	if (dec >= 16)
	{
		len += ft_print_hexupp(dec / 16);
		len += ft_print_hexupp(dec % 16);
	}
	else
	{
		len += write(1, &"0123456789ABCDEF"[dec], 1);
	}
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:21:51 by jenavarr          #+#    #+#             */
/*   Updated: 2022/06/01 15:48:09 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_ptr(void *ptr)
{
	write(1, "0x", 2);
	if (!ptr)
		return (write(1, "0", 1) + 2);
	return (ft_print_hexlow(((unsigned long)ptr)) + 2);
}

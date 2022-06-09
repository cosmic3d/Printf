/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:55:45 by jenavarr          #+#    #+#             */
/*   Updated: 2022/06/03 12:39:54 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_int(int i)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_itoa(i);
	len += ft_print_str(str);
	free(str);
	return (len);
}

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

static char	*ft_rev_char_tab(char *tab, int size)
{
	int	container;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		container = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = container;
		i++;
	}
	return (tab);
}

int	ft_print_hexupp(int dec)
{
	int			quotient;
	int			remainder;
	int			j;

	static char	hexadecimalnum[100];

	j = 0;
	quotient = dec;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;
		else
			hexadecimalnum[j++] = 55 + remainder;
		quotient = quotient / 16;
	}
	if (dec >= 10 && dec <= 15)
		hexadecimalnum[1] = '0';
	return (write(1, ft_rev_char_tab(hexadecimalnum, j), j));
}

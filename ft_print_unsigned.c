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

static int	check_length(unsigned int numb)
{
	int	cypher;

	cypher = 0;
	if (numb != 0)
	{
		while (numb / 10 > 0)
		{
			numb = numb / 10;
			cypher++;
		}
		numb = numb / 10;
		cypher++;
	}
	return (cypher);
}

static void	get_num(unsigned int numi, int a)
{
	char	real_num;
	int		b;

	b = 0;
	if (a == 0)
	{
		numi = numi % 10;
		real_num = numi + '0';
		if (real_num != '(')
			write(1, &real_num, 1);
	}
	else
	{
		while (b++ < a)
			numi = numi / 10;
		numi = numi % 10;
		real_num = numi + '0';
		write(1, &real_num, 1);
	}
}

static void	ft_putnbr(unsigned int nb)
{
	int	a;
	int	cyph;

	a = 0;
	cyph = check_length(nb);
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb == 0)
		write(1, "0", 1);
	else
	{
		while (cyph > a)
		{
			get_num(nb, cyph - 1);
			cyph--;
		}
	}
}

int ft_print_unsigned(unsigned int i)
{
    if (i == 0)
        return (write(1, "0", 1) + 1);
    ft_putnbr(i);
    return (check_length(i) + 1);
}
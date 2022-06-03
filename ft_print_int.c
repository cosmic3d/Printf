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
int	check_length(int numb)
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

void	get_num(int numi, int a)
{
	char	real_num;
	int		b;
	int		cypho;

	b = 0;
	cypho = check_length(numi);
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

void	ft_putnbr(int nb)
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
	if (nb == -2147483648)
		write(1, "2147483648", 10);
	if (nb == 0 && nb != -2147483648)
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

int	ft_print_int(int i)
{
	ft_putnbr(i);
	return (check_length(i));
}

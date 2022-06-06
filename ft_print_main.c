/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:33:45 by jenavarr          #+#    #+#             */
/*   Updated: 2022/06/01 16:30:44 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main()
{
	int		hex;
	char	point;
	int		print;
	int		ft_print;
	unsigned int	unsis;
	const 	char str[80] = "Output is: ola %s q tal %d\nHex is: %X\nPorc is: %%\nUnsi is: %u\n";	

	unsis = 0;
	point = 'p';
	hex = 12;
	print = printf(str, "puta", 0, hex, unsis);
	ft_print = ft_printf(str, "puta", 0, hex, unsis);
	if (print == ft_print)
		printf("Return values are equal :)\n");
	else
		printf("Return values arent equal :(\n");
	printf("Original returns: %d\n", print);
	printf("Yours returns: %d\n", ft_print);
}

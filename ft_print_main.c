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
	const char str[50] = "Output is: ola %s q tal %d\n";

	if (printf(str, "puta", 222) == ft_printf(str, "puta", 222))
		printf("Return values are equal :)\n");
}

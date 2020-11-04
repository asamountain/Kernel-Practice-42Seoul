/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sj <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:50:14 by sj                #+#    #+#             */
/*   Updated: 2020/11/01 04:18:26 by seyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n100, char n10, char n1)
{
	char comma;
	char space;

	comma = ',';
	space = ' ';
	write(1, &n100, 1);
	write(1, &n10, 1);
	write(1, &n1, 1);
	if (!(n100 == '7' && n10 == '8' && n1 == '9'))
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	char n100;
	char n10;
	char n1;

	n100 = '0';
	n10 = '1';
	n1 = '2';
	while (n100 <= '7')
	{
		while (n10 <= '8')
		{
			while (n1 <= '9')
			{
				ft_putchar(n100, n10, n1);
				n1++;
			}
			n1 = '0';
			n1 = ++n10 + 1;
		}
		n10 = ++n100;
	}
}

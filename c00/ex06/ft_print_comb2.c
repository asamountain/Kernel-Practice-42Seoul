/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prchar_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sj <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:50:14 by sj                #+#    #+#             */
/*   Updated: 2020/11/04 19:18:16 by seyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar( char l_n10, char l_n1, char r_n10, char r_n1)
{
	 char comma;
	 char blank;

	 comma = ',';
	 blank = ' ';
	 write(1, &l_n10, 1);
	 write(1, &l_n1, 1);
	 write(1, &blank, 1);
	 write(1, &r_n10, 1);
	 write(1, &r_n1, 1);
	 write(1, &comma, 1);
	 write(1, &blank, 1);
}

void   ft_prchar_comb2(void)
{
	char l_n10 = '0';
	char l_n1 = '0';
	char r_n10 = '0';
	char r_n1 = '0';

	while(l_n10 < '9'){
		ft_putchar(l_n10, l_n1, r_n10, r_n1);
		r_n1++;
		if(l_n1 == '9')
		{
			r_n1 = '0';
			r_n10++;
		}
		if(l_n1 == '9')
		{
			r_n1 = '0';
			r_n10 = '0';
			l_n1++;
		}
		if(r_n1 == '9')
		{
			r_n1 = '0';
			r_n10 = '0';
			l_n1 = '0';
			l_n10++;
		}

	}



}

int		main(void)
{
	ft_prchar_comb2();
	return (0);
}



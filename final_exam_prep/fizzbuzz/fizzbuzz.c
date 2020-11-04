/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyoun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 06:28:40 by seyoun            #+#    #+#             */
/*   Updated: 2020/11/05 06:51:14 by seyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (*str)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_fizzbuzz(void)
{
	int i;
	
	i = 1;
	while (i <= 100)
	{
		if ( i / 15 == 0 )
			ft_putstr("fizzbuzz");
		if ( i / 3 == 0 )
			ft_putstr("fizz");
		if ( i / 5 == 0 )
			ft_putstr("buzz");
		else
			ft_putchar(i); /* atoi wanted */
		i++;
		ft_putchar('\n');
	}
}

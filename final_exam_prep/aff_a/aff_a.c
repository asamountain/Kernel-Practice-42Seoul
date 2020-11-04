/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyoun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:16:40 by seyoun            #+#    #+#             */
/*   Updated: 2020/11/05 06:25:17 by seyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_aff_a(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
		{
			putchar('a');
		}
		i++;
	}
	putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_aff_a(argv[1]);
	}
	else
	{
		putchar('a');
		putchar('\n');
	}
	return (0);
}

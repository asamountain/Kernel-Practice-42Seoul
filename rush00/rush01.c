/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeykim <hyeykim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 03:32:09 by hyeykim           #+#    #+#             */
/*   Updated: 2020/10/18 04:04:35 by hyeykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	test(int x, int y, int x1, int y1)
{
	if ((x1 == 0 && y1 == 0) || (x1 == x - 1 && y1 == y - 1))
	{
		ft_putchar('/');
	}
	else if ((x1 == x - 1 && y1 == 0) || (x1 == 0 && y1 == y - 1))
	{
		ft_putchar('\\');
	}
	else if (x1 == 0 || y1 == 0 || x1 == x - 1 || y1 == y - 1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int x1;
	int y1;

	y1 = 0;
	while (y1 <= y - 1)
	{
		x1 = 0;
		while (x1 <= x - 1)
		{
			test(x, y, x1, y1);
			x1++;
		}
		y1++;
		ft_putchar('\n');
	}
}

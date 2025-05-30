/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeykim <hyeykim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 04:10:52 by hyeykim           #+#    #+#             */
/*   Updated: 2020/10/18 04:19:24 by hyeykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Practice: Draws a rectangle with ASCII characters for rush02.
// Concepts: Loops, conditionals, function decomposition, output formatting, ASCII art.

#include <unistd.h>

void	ft_putchar(char c);

void	test(int x, int y, int x1, int y1)
{
	if (y1 == 0 && (x1 == 0 || x1 == x - 1))
	{
		ft_putchar('A');
	}
	else if (y1 == x - 1 && (x1 == 0 || x1 == x - 1))
	{
		ft_putchar('C');
	}
	else if (x1 == 0 || y1 == 0 || x1 == x - 1 || y1 == y - 1)
	{
		ft_putchar('B');
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

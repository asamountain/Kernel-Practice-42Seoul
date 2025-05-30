/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeykim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 16:25:20 by hyeykim           #+#    #+#             */
/*   Updated: 2020/10/18 02:55:38 by hyeykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Practice: Draws a rectangle with ASCII characters for rush03.
// Concepts: Loops, conditionals, function decomposition, output formatting, ASCII art.

void	ft_putchar(char c);

void	test(int x, int y, int x1, int y1)
{
	if (x1 == 0 && (y1 == 0 || y1 == y - 1))
	{
		ft_putchar('A');
	}
	else if (x1 == x - 1 && (y1 == 0 || y1 == y - 1))
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

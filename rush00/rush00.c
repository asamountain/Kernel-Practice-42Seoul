/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyoun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 04:40:23 by seyoun            #+#    #+#             */
/*   Updated: 2020/10/18 04:40:32 by seyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Practice: Draws a rectangle with ASCII characters for rush00.
// Concepts: Loops, conditionals, function decomposition, output formatting.

void ft_putchar(char c);

void test(int x, int y, int x1, int y1){

	if(x1 == 0 && ( y1 == 0 || y1 == y-1 )){
		ft_putchar('A');
	}else if(x1 == x-1 && ( y1 == 0 || y1 == y-1 )){
		ft_putchar('C');
	}else if (x1 == 0 || y1 == 0 || x1 == x-1 || y1 == y-1 ){
		ft_putchar('B');
	}else{
		ft_putchar(' ');
	}
}

void rush( int x, int y ){

	int x1;
	int y1;

	y1 = 0;
	
	while( y1 <= y-1 ){
		test(x, y, x1, y1);
		x1++;
	}
	y1++;
	ft_putchar('\n');
}

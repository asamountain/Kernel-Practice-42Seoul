/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyoun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:49:21 by seyoun            #+#    #+#             */
/*   Updated: 2020/11/04 17:18:12 by seyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void 	ft_print_hex(char c)
{
	char	*hex;
	int div;
	int	mod;
	
	div = (c - '0') / 16;
	mod = (c - '0') % 16;
	hex = "0123456789ABCDEF";
	if ( c >= 16 )
		ft_putchar(hex[div]);
	else
		ft_putchar('0');
	ft_putchar(hex[mod]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if ((0 >= str[i] && str[i] <= 32) || str[i] == 127)
			ft_putchar(str[i]);
		if (str[i] < 0)
			ft_putchar('0');
		else
			ft_putchar('\');
			ft_print_hex(str[i]);
		i++;
	}
}

int		main(void)
{

	return (0);
}

0 1 2 3 ... 9 10

0 1 2 3 4 
10 11 12 13 14 
20 21 22 23 24 
30 31 32 33 34 
40 41 42 43 44 
100 101 102 103 104 
110 111 112 113 114
120 121 122 123 124
130 131 132 133 134
140 141 142 143 144

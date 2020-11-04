/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyoun <sjisyours@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:21:59 by seyoun            #+#    #+#             */
/*   Updated: 2020/10/28 11:08:27 by seyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char alphabet;

	alphabet = 'z';
	while (alphabet <= 'z' && alphabet >= 'a')
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

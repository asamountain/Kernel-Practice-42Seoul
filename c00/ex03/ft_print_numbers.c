/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyoun <sjisyours@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:34:12 by seyoun            #+#    #+#             */
/*   Updated: 2020/10/22 16:43:19 by seyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int num;

	num = '0';
	while (num >= '0' && num <= '9')
	{
		write(1, &num, 1);
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}

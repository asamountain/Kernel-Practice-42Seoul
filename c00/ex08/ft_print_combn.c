/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyoun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:30:10 by seyoun            #+#    #+#             */
/*   Updated: 2020/10/26 17:30:12 by seyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_combn(int n);
{
	int output_num[n];
	int n10;
	int n1;

	while(++n){
		write(1, output_num[n], n);
		n1++;
		write(1, &n1, 1);
			if(n1==9){
				n1==0;
				n10++;
		}
	}
}
int		main(void)
{
	ft_print_combn(2);
	return (0);
}

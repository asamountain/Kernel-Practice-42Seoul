/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyoun <seyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 18:39:05 by seyoun            #+#    #+#             */
/*   Updated: 2020/10/29 05:06:06 by seyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int i;

	i = 0;
	while (i != (size / 2))
	{
		tmp = tab[size - i];
		tab[size - i] = tab[i];
		tab[i] = tmp;
		i++;
	}
}

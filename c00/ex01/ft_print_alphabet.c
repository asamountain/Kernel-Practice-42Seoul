/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyoun <seyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:39:48 by sj                #+#    #+#             */
/*   Updated: 2020/10/28 11:07:26 by seyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	char c;

	c = 'a' - 1;
	while (++c && c <= 'z')
	{
		write(1, &c, 1);
	}
}

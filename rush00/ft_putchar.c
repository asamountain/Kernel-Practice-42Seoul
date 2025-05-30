/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyoun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 04:40:28 by seyoun            #+#    #+#             */
/*   Updated: 2020/10/18 04:46:24 by seyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Practice: Print a single character to standard output.
// Concepts: Function definition, use of write system call, character output.

#include <unistd.h>

void ft_putchar(char c){

	write(1, &c, 1);
}

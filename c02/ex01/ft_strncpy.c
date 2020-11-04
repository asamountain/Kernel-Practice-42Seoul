/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyoun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:37:24 by seyoun            #+#    #+#             */
/*   Updated: 2020/11/02 19:47:20 by seyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int src_length;
	unsigned int dest_length;

	src_length = 0;
	dest_length = 0;
	while ((src[src_length] != '\0') && (src_length < n))
	{
		dest[src_length] = src[src_length];
		src_length++;
	}
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	return (dest);
}

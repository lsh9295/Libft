/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 20:52:25 by slee              #+#    #+#             */
/*   Updated: 2021/05/27 18:11:16 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	find;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char	*)src;
	find = c;
	while (i < n)
	{
		dest[i] = source[i];
		if (find == source[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (dest + i + 1);
}

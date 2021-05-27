/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:15:37 by slee              #+#    #+#             */
/*   Updated: 2021/05/06 21:37:28 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr;
	unsigned char	find;
	size_t			i;

	i = 0;
	arr = (unsigned char *)s;
	find = c;
	while (i < n)
	{
		if (*arr == find)
			return (arr);
		arr++;
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:58:29 by slee              #+#    #+#             */
/*   Updated: 2021/05/15 21:13:01 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	arr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		arr[i] = c;
		i++;
	}
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 21:54:47 by slee              #+#    #+#             */
/*   Updated: 2021/05/27 21:33:20 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;
	size_t	j;

	i = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	j = dst_size;
	if (n == 0)
		return (src_size);
	while (src[i] && i + dst_size < n - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	if (n > dst_size)
		return (dst_size + src_size);
	else
		return (n + src_size);
}

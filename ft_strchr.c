/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 18:24:06 by slee              #+#    #+#             */
/*   Updated: 2021/05/10 19:23:54 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	find;

	str = (char *)s;
	find = c;
	while (*str)
	{
		if (*str == find)
			return (str);
		str++;
	}
	if (find == *str)
		return (str);
	return (0);
}

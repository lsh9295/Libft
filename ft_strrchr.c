/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:08:34 by slee              #+#    #+#             */
/*   Updated: 2021/05/15 21:08:35 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned char	find;
	size_t			str_len;

	str = (char *)s;
	find = c;
	str_len = ft_strlen(str);
	while (str_len)
	{
		if (str[str_len] == find)
			return (&str[str_len]);
		str_len--;
	}
	if (str[str_len] == find)
		return (&str[str_len]);
	return (0);
}

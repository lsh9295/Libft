/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:39:44 by slee              #+#    #+#             */
/*   Updated: 2021/05/17 16:49:18 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*find;
	size_t	i;
	size_t	str_len;
	size_t	find_len;

	str = (char *)haystack;
	find = (char *)needle;
	i = 0;
	str_len = ft_strlen(str);
	find_len = ft_strlen(find);
	if (*needle == '\0')
		return (str);
	if (str_len < find_len || len < find_len)
		return (0);
	while (i < len - find_len + 1)
	{
		if (ft_strncmp(&str[i], find, find_len) == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}

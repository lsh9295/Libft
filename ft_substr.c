/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 21:20:42 by slee              #+#    #+#             */
/*   Updated: 2021/05/27 22:11:23 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	size_t	n_len;
	char	*arr;

	if (s == NULL)
		return (NULL);
	s_len = (unsigned int)ft_strlen(s);
	n_len = ft_strlen(s + start);
	i = 0;
	if (s_len < start)
		return (ft_strdup(""));
	if (n_len < len)
		len = n_len;
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	while (i < len)
	{
		arr[i] = s[start];
		i++;
		start++;
	}
	arr[i] = '\0';
	return (arr);
}

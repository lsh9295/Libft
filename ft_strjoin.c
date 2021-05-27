/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 21:45:40 by slee              #+#    #+#             */
/*   Updated: 2021/05/15 20:06:47 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	else if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	arr = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!arr)
		return (NULL);
	ft_strlcpy(arr, s1, s1_len + 1);
	ft_strlcat(arr + s1_len, s2, s2_len + 1);
	return (arr);
}

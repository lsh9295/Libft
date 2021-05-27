/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 22:14:46 by slee              #+#    #+#             */
/*   Updated: 2021/05/15 21:02:25 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*arr;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	if (!(arr = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	ft_strlcpy(arr, &s1[start], end - start + 1);
	return (arr);
}

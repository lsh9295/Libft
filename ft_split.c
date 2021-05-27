/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:10:30 by slee              #+#    #+#             */
/*   Updated: 2021/05/17 16:49:05 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_arr_skip(char *str, char c)
{
	while (*str == c)
		str++;
	return (str);
}

static char		**ft_arr_free(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static size_t	ft_arr_len(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	ft_arr_cnt(char const *s, char c)
{
	size_t i;
	size_t cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cnt);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	cnt;
	size_t	len;
	char	*str;
	char	**arr;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)s;
	cnt = ft_arr_cnt(str, c);
	if (!(arr = (char **)malloc(sizeof(char *) * (cnt + 1))))
		return (NULL);
	while (i < cnt)
	{
		str = ft_arr_skip(str, c);
		len = ft_arr_len(str, c);
		if (!(arr[i] = (char *)malloc(sizeof(char) * (len + 1))))
			return (ft_arr_free(arr));
		ft_strlcpy(arr[i], str, len + 1);
		str += len;
		i++;
	}
	arr[cnt] = NULL;
	return (arr);
}

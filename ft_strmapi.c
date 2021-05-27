/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 18:20:44 by slee              #+#    #+#             */
/*   Updated: 2021/05/17 19:15:57 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*arr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	arr = ft_strdup(s);
	if (!arr)
		return (NULL);
	i = 0;
	while (arr[i])
	{
		arr[i] = f(i, arr[i]);
		i++;
	}
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:52:27 by slee              #+#    #+#             */
/*   Updated: 2021/05/17 18:14:09 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_n_cnt(int n)
{
	size_t cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		cnt++;
	}
	return (cnt);
}

char			*ft_itoa(int n)
{
	size_t	minus;
	char	*arr;
	size_t	cnt;

	minus = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = -n;
		minus++;
	}
	cnt = ft_n_cnt(n);
	if (!(arr = (char *)malloc(sizeof(char) * cnt + minus)))
		return (0);
	arr[cnt + minus - 1] = '\0';
	while (cnt + minus - 1)
	{
		arr[cnt + minus - 2] = (n % 10) + '0';
		n = n / 10;
		cnt--;
	}
	if (minus == 2)
		arr[0] = '-';
	return (arr);
}

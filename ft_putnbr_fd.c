/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 20:57:42 by slee              #+#    #+#             */
/*   Updated: 2021/05/20 21:48:30 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_write_num(int n, int fd)
{
	char i;

	if (n == 0)
		return ;
	i = n % 10 + '0';
	n = n / 10;
	ft_write_num(n, fd);
	ft_putchar_fd(i, fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	else if (n > 0)
		ft_write_num(n, fd);
	else if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
		ft_write_num(n, fd);
	}
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 20:30:27 by slee              #+#    #+#             */
/*   Updated: 2021/05/17 21:30:14 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t len;
	size_t i;

	if (fd < 0 || !s)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
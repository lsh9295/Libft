/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 21:38:31 by slee              #+#    #+#             */
/*   Updated: 2021/05/20 16:30:04 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *del_node;
	t_list *del_next_node;

	if (!lst)
		return ;
	del_node = *lst;
	while (del_node != NULL)
	{
		del_next_node = del_node->next;
		ft_lstdelone(del_node, del);
		del_node = del_next_node;
	}
	*lst = NULL;
}

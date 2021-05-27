/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:39:17 by slee              #+#    #+#             */
/*   Updated: 2021/05/20 16:29:55 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *temp_lst;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		temp_lst = ft_lstnew(f(lst->content));
		if (!temp_lst)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, temp_lst);
		temp_lst = temp_lst->next;
		lst = lst->next;
	}
	return (new_lst);
}

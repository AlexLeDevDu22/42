/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:03:55 by agarin            #+#    #+#             */
/*   Updated: 2026/11/12 20:32:53 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin_new_lst;
	t_list	*lsta;
	t_list	*lsta_new;

	lsta = lst;
	begin_new_lst = malloc(sizeof(t_list));
	if (!lst || !f || !del || !begin_new_lst)
		return (nullptr);
	begin_new_lst->content = f(lsta->content);
	lsta_new = begin_new_lst;
	lsta = lsta->next;
	while (lsta)
	{
		lsta_new->next = malloc(sizeof(t_list));
		if (!(lsta_new->next))
		{
			ft_lstclear(&begin_new_lst, del);
			return (nullptr);
		}
		lsta_new = lsta_new->next;
		lsta_new->content = f(lsta->content);
		lsta = lsta->next;
	}
	lsta_new->next = nullptr;
	return (begin_new_lst);
}

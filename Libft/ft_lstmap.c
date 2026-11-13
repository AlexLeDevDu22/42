/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:03:55 by agarin            #+#    #+#             */
/*   Updated: 2026/11/13 13:50:04 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin_new_lst;
	t_list	*lst_new;

	if (!lst || !f)
		return (nullptr);
	begin_new_lst = malloc(sizeof(t_list));
	if (!begin_new_lst)
		return (nullptr);
	begin_new_lst->content = f(lst->content);
	lst_new = begin_new_lst;
	lst = lst->next;
	while (lst)
	{
		lst_new->next = malloc(sizeof(t_list));
		if (!(lst_new->next))
		{
			ft_lstclear(&begin_new_lst, del);
			return (nullptr);
		}
		lst_new = lst_new->next;
		lst_new->content = f(lst->content);
		lst = lst->next;
	}
	lst_new->next = nullptr;
	return (begin_new_lst);
}

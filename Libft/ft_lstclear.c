/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 16:55:12 by agarin            #+#    #+#             */
/*   Updated: 2026/11/12 20:31:54 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lsta;

	if (!lst || !(*lst) || !del)
		return ;
	lsta = *lst;
	while (lsta)
	{
		lsta = lsta->next;
		del((*lst)->content);
		free(*lst);
		*lst = lsta;
	}
}

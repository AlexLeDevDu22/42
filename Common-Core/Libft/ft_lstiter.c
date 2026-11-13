/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:00:18 by agarin            #+#    #+#             */
/*   Updated: 2026/11/13 13:40:22 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lsta;

	if (!lst || !f)
		return ;
	lsta = lst;
	while (lsta)
	{
		f(lsta->content);
		lsta = lsta->next;
	}
}

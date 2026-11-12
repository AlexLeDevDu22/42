/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 16:50:48 by agarin            #+#    #+#             */
/*   Updated: 2026/11/12 20:34:46 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lsta;

	if (!new || !lst)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		lsta = ft_lstlast(*lst);
		lsta->next = new;
	}
}

// void f(void *)
// {

// }

// #include <stdio.h>
// int main()
// {
//     t_list * l =  NULL;
// 	ft_lstadd_back(&l, ft_lstnew((void*)1));

//     printf("%d", l->content == (void*)1);
//     ft_lstclear(&l, f);
// }
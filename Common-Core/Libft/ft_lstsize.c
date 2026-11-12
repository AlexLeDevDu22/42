/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 16:43:56 by agarin            #+#    #+#             */
/*   Updated: 2026/11/12 20:34:06 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*lsta;
	unsigned int	i;

	if (!lst)
		return (0);
	lsta = lst;
	i = 0;
	while (lsta)
	{
		lsta = lsta->next;
		i++;
	}
	return (i);
}

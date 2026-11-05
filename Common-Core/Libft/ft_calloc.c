/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:07:26 by agarin            #+#    #+#             */
/*   Updated: 2026/11/05 21:18:51 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*res;

	if (size < 1 || n < 1)
		return (nullptr);
	res = malloc(n * size);
	if (!res)
		return (nullptr);
	return (res);
}

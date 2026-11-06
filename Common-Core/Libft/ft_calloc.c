/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:07:26 by agarin            #+#    #+#             */
/*   Updated: 2026/11/06 13:06:41 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*res;
	size_t total;

	if (size != 0 && (n * size) / size != n) // overflow
		return (nullptr);
	total = size * n;
	res = malloc(total);
	if (!res)
		return (nullptr);
	ft_bzero(res, total);
	return (res);
}

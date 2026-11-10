/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:23:21 by agarin            #+#    #+#             */
/*   Updated: 2026/11/09 16:28:05 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dsti;
	size_t	srci;
	size_t res;
	
	dsti = 0;
	while (dst[dsti] && dsti < size)
		dsti++;
	res = dsti + ft_strlen(src);
	srci = 0;
	if (dsti < size)
	{
		while (dsti < size - 1 && src[srci])
		{
			dst[dsti] = src[srci];
			dsti++;
			srci++;
		}
		dst[dsti] = 0;
	}
	return (res);
}
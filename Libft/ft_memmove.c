/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:56:28 by agarin            #+#    #+#             */
/*   Updated: 2026/11/13 12:35:58 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (nullptr);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)(dest))[i] = ((unsigned char *)(src))[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (n > 0)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char b[] = "ABCDE---";
	ft_memmove(b + 3, b, 5);
	printf("%s\n", b+3);
}*/
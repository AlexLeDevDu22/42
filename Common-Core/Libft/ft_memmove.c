/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:56:28 by agarin            #+#    #+#             */
/*   Updated: 2026/11/06 13:41:54 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		((char *)(dest))[n - 1] = ((char *)(src))[n - 1];
		n--;
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:51:44 by agarin            #+#    #+#             */
/*   Updated: 2026/11/05 20:42:37 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)(dest))[i] = ((char *)(src))[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int main(void)
{
	char b[] = "ABCDE---";
	ft_memcpy(b + 3, b, 5);
	printf("%s\n", b);
}*/
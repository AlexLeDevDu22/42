/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:56:28 by agarin            #+#    #+#             */
/*   Updated: 2026/11/05 16:05:23 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp;

	temp = malloc(n); enlever
	if (!temp)
		return (nullptr);
	i = 0;
	while (i < n && ((char *)(dest))[i])
	{
		if (sizeof(dest[i]) == sizeof(src[i]))
			temp[i] = ((char *)(src))[i];
		i++;
	}
	i = 0;
	while (i < n && ((char *)(dest))[i])
	{
		if (sizeof(dest[i]) == sizeof(src[i]))
			((char *)(dest))[i] = temp[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int main(void)
{
	char b[] = "ABCDE---";
	ft_memmove(b + 3, b, 5);
	printf("%s\n", b+3);
}*/
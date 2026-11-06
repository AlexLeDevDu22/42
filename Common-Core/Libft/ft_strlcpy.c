/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:29:58 by agarin            #+#    #+#             */
/*   Updated: 2026/11/06 15:19:46 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	if (argc == 4)
// 	{
// 		ft_strlcpy(argv[1], argv[2], atoi(argv[3]));
// 		printf("%s", argv[1]);
// 	}
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:42:28 by agarin            #+#    #+#             */
/*   Updated: 2026/11/05 21:19:07 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (!little || !(*little))
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && big[i + j] == little[j])
		{
			if (i + j >= len || !(big[i + j]))
				return (nullptr);
			j++;
		}
		if (big[i + j] == little[j])
			return ((char *)(big + i));
		i++;
	}
	return (nullptr);
}

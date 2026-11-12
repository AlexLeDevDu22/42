/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:25:52 by agarin            #+#    #+#             */
/*   Updated: 2026/11/12 20:22:34 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	size_t			i;
	unsigned int	n;

	n = 0;
	while (s[n])
		n++;
	if (n <= start)
		return (ft_calloc(1, 1));
	i = 0;
	if (n - start < len)
		res = malloc(n - start + 1);
	else
		res = malloc(len + 1);
	if (!res)
		return (nullptr);
	while (start + i < n && i < len && s[start + i])
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}

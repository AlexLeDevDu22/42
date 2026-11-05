/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:29:58 by agarin            #+#    #+#             */
/*   Updated: 2026/11/05 17:11:43 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		s1s;
	int		s2s;

	if (!s1 || !s2)
		return (nullptr);
	s1s = ft_strlen(s1);
	s2s = ft_strlen(s2);
	res = malloc(s1s + s2s + 1);
	if (!res)
		return (nullptr);
	ft_strlcpy(res, s1, s1s);
	ft_strlcpy(res + s1s, s2, s2s);
	res[s1s + s2s + 1] = 0;
	return (res);
}

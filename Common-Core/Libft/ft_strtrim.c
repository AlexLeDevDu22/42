/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:56:42 by agarin            #+#    #+#             */
/*   Updated: 2026/11/10 17:29:04 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	prefix_len(char const *s1, char const *set)
{
	int	n;
	int	seti;

	n = 0;
	while (s1[n])
	{
		seti = 0;
		while (set[seti] && set[seti] != s1[n])
			seti++;
		if (!set[seti])
			return (n);
		n++;
	}
	return (n);
}

static int	suffix_len(char const *s1, int s1len, char const *set)
{
	int	n;
	int	seti;

	n = 0;
	while (s1len - n - 1 >= 0)
	{
		seti = 0;
		while (set[seti] && set[seti] != s1[s1len - n - 1])
			seti++;
		if (!set[seti])
			return (n);
		n++;
	}
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		s1len;
	unsigned int		pre_len;
	unsigned int		suf_len;
	char	*new;

	s1len = ft_strlen(s1);
	pre_len = prefix_len(s1, set);
	suf_len = suffix_len(s1, s1len, set);
	if (pre_len + suf_len >= s1len)
		return (calloc(1, 1));
	new = malloc(s1len - pre_len - suf_len + 1);
	if (!new)
		return (nullptr);
	ft_memcpy(new, s1 + pre_len, s1len - pre_len - suf_len);
	new[s1len - pre_len - suf_len] = 0;
	return (new);
}

// int main()
// {
// 	printf(ft_strtrim("   xxx   xxx", " x"));
// }
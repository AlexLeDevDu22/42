/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:56:42 by agarin            #+#    #+#             */
/*   Updated: 2026/11/05 17:12:48 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

static int prefix_len(char const *s1, char const *set)
{
	int n;
	int seti;
	
	n = 0;
	while (s1[n])
	{
		seti = 0;
		while (set[seti] && set[seti] != s1[n])
			seti++;
		if (set[seti] != s1[n])
			return (n);
		n++;
	}
	return (n);
}

static int suffix_len(char const *s1, int s1len, char const *set)
{
	int n;
	int seti;
	
	while (s1len - n >= 0)
	{
		seti = 0;
		while (set[seti] && set[seti] != s1[n])
			seti++;
		if (set[seti] != s1[s1len - n])
			return (n);
		n++;
	}
	return (n);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int s1len;
	int pre_len;
	int suf_len;
	int i;

	s1len = ft_strlen(s1);
	suf_len = prefix_len(s1);
	suf_len = suffix_len(s1);
	i = 0;
	while (i < s1len - )
}
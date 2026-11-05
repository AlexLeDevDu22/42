/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:39:55 by agarin            #+#    #+#             */
/*   Updated: 2026/11/05 21:18:22 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(char const *s, char c)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (i > 0 && s[i - 1] != c && s[i] == c && s[i + 1])
			n++;
		i++;
	}
	return (n);
}

static char	**clear_tabs(char **main_tab, int main_tab_len)
{
	int	i;

	i = 0;
	while (i < main_tab_len)
	{
		free(main_tab[i]);
		i++;
	}
	free(main_tab);
	return (nullptr);
}

char	**ft_split(char const *s, char c)
{
	char	**main_tab;
	int		main_tab_i;
	char	*next_split;
	int		tab_i;

	main_tab = malloc(sizeof(char *) * (num_words(s, c) + 1));
	if (!main_tab)
		return (nullptr);
	main_tab_i = 0;
	while (*s)
	{
		next_split = ft_strchr(s, c);
		if (s < next_split)
		{
			main_tab[main_tab_i] = malloc(next_split - s + 1);
			if (!main_tab[main_tab_i])
				return (clear_tabs(main_tab, main_tab_i + 1));
			tab_i = 0;
			while (tab_i < next_split - s)
			{
				main_tab[main_tab_i][tab_i] = *s;
				s++;
				tab_i++;
			}
			main_tab[main_tab_i][tab_i] = 0;
			main_tab_i++;
		}
		s++;
	}
	main_tab[main_tab_i] = nullptr;
	return (main_tab);
}

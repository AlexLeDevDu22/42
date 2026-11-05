/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:09:43 by agarin            #+#    #+#             */
/*   Updated: 2026/11/04 18:12:54 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strdup(const char *s)
{
	int		i;
	char	*new;

	i = 0;
	while (s[i])
		i++;
	new = malloc(i + 1);
	if (!new)
		return (nullptr);
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = 0;
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:42:28 by agarin            #+#    #+#             */
/*   Updated: 2026/11/04 15:06:10 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (!little || !(*little))
		return (big);
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
			return (big + i);
		i++;
	}
	return (nullptr);
}

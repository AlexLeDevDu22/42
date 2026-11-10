/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 18:03:26 by agarin            #+#    #+#             */
/*   Updated: 2026/11/10 10:42:49 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0 && s[i] != (unsigned char) c)
		i--;
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (nullptr);
}

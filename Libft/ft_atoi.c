/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:54:08 by agarin            #+#    #+#             */
/*   Updated: 2026/11/10 12:02:41 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	v;
	int	sign;

	v = 0;
	sign = 1;
	while ((9 <= *nptr && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr)
	{
		if (*nptr < 48 || *nptr > 57)
			return (v * sign);
		v = v * 10 + *nptr - 48;
		nptr++;
	}
	return (v * sign);
}

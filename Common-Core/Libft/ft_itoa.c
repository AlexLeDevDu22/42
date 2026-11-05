/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:32:27 by agarin            #+#    #+#             */
/*   Updated: 2026/11/05 21:16:27 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

static int	n_size(int n)
{
	if (n < 0)
		return (1 + n_size(-n));
	if (n <= 9)
		return (1);
	return (1 + n_size(n / 10));
}

char	*ft_itoa(int n)
{
	char	*res;
	int		total_size;
	int		i;

	total_size = n_size(n);
	res = malloc(total_size + 1);
	i = 0;
	if (n < 0)
	{
		res[0] = '-';
		i++;
	}
	while (i < total_size)
	{
		res[total_size - i] = 30 + n % 10;
		n /= 10;
	}
	res[total_size] = 0;
	return (res);
}

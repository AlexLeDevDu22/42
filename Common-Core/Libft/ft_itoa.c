/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:32:27 by agarin            #+#    #+#             */
/*   Updated: 2026/11/10 17:46:32 by agarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

static int	n_size(long n)
{
	if (n < 0)
		return (1 + n_size(n * -1));
	if (n <= 9)
		return (1);
	return (1 + n_size(n / 10));
}

#include <stdio.h>


char	*ft_itoa(int n)
{
	char	*res;
	long	total_size;
	int		i;

	total_size = n_size(n);
	res = malloc(total_size + 1);
	if (!res)
		return (nullptr);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	i = 0;
	while (i < total_size - 1)
	{
		res[total_size - 1 - i] = 48 + n % 10;
		n /= 10;
		i++;
	}
	res[total_size] = 0;
	return (res);
}

int main()
{
	printf(ft_itoa(-12));
}
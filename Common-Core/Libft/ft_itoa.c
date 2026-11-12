/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarin <agarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:32:27 by agarin            #+#    #+#             */
/*   Updated: 2026/11/12 20:26:29 by agarin           ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	char	*res;
	long	total_size;

	total_size = n_size(n);
	res = malloc(total_size + 1);
	res[total_size] = 0;
	res[0] = '0';
	if (n == 0)
		return (res);
	if (!res)
		return (nullptr);
	res[0] = '-';
	while ((total_size > 0 && n != 0) || total_size > 1)
	{
		if (n >= 0)
			res[total_size - 1] = 48 + n % 10;
		else
			res[total_size - 1] = 48 + -(n % 10);
		n /= 10;
		total_size--;
	}
	return (res);
}

// #include <limits.h>

// int main()
// {
// 	printf(ft_itoa(0));
// }
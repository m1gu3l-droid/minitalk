/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:03:51 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/07 21:22:48 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	c;
	int	si;
	int	res;

	c = 0;
	si = 1;
	res = 0;
	while (nptr[c] == 32 || (nptr[c] >= 9 && nptr[c] <= 13))
			c++;
	if (nptr[c] == '-' || nptr[c] == '+')
	{
		if (nptr[c] == '-')
			si *= -1;
		c++;
	}
	while (nptr[c] >= '0' && nptr[c] <= '9')
	{
		res = res * 10 + (nptr[c] - '0');
		c++;
	}
	return (res * si);
}
/*
int	main(void)
{
		char	src[] = "-41234";

		printf("%d...%d\n", ft_atoi(src), atoi(src));
		return 0;
}
*/

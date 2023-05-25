/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:45:29 by fnovais-          #+#    #+#             */
/*   Updated: 2022/12/07 15:30:56 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_of_int(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_itoa_printf(int n, int size)
{
	int		count;
	int		sign;
	char	*s;

	sign = 1;
	count = size_of_int(n);
	s = malloc((sizeof(char) * (count + 1)));
	if (!s)
		return (0);
	s[count] = '\0';
	if (n < 0)
	{
			sign = -1;
			s[0] = '-';
	}
	if (n == 0)
		s[0] = '0';
	while (n != 0)
	{
		s[--count] = (n % 10 * sign) + '0';
		n = n / 10;
	}
	size += ft_putstr(s);
	free(s);
	return (size);
}

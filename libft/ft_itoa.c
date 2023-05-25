/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:45:29 by fnovais-          #+#    #+#             */
/*   Updated: 2022/12/14 17:44:36 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_of_int(int n)
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

char	*ft_itoa(int n)
{
	int		count;
	int		sign;
	char	*s;

	sign = 1;
	count = size_of_int(n);
	s = malloc((sizeof(char) * (count + 1)));
	if (!s)
		return (NULL);
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
		count--;
		s[count] = (n % 10 * sign) + '0';
		n = n / 10;
	}
	return (s);
}
/*
int	main(void)
{
		printf("%s\n", ft_itoa(0));
		return (0);
}
*/

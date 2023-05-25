/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:05:29 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 11:32:31 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s_one;
	const unsigned char	*s_two;
	size_t				m;

	s_one = (const unsigned char *)s1;
	s_two = (const unsigned char *)s2;
	m = 0;
	while (m < n)
	{
		if (s_one[m] != s_two[m])
			return (s_one[m] - s_two[m]);
		m++;
	}
	return (0);
}
/*
int	main(void)
{
		const char	aa[] = "aaaaaa";
		const char	bb[] = "aaabaa";

		printf("%d\n%d\n", ft_memcmp(aa, bb, 20), memcmp(aa, bb, 20));
		return (0);
}
*/

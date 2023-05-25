/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:06:05 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 11:55:48 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			m;
	unsigned char	*s_set;
	unsigned char	c_set;

	s_set = (unsigned char *)s;
	c_set = (unsigned char)c;
	m = 0;
	while (m < n)
	{
			s_set[m] = c_set;
			m++;
	}
	return (s_set);
}
/*
int	main(void)
{
	unsigned char	ss[] = "aaaaaaaaa";
	char	cc = 'c';

	printf("%p\n", ft_memset(ss, cc, 3*sizeof(char)));
//	printf("%p\n", ft_memset(ss, cc, 3*sizeof(char)));
}
*/

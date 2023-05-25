/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:05:18 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 11:56:12 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*s_mem;
	unsigned char	c_mem;

	c_mem = (unsigned char)c;
	s_mem = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (*s_mem == c_mem)
			return (s_mem);
		index++;
		s_mem++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	ss[50] = "aa&aa";
	char	c = '&';
	printf("%p\n%p\n", ft_memchr(ss, c, 20), memchr(ss, c, 20));
	return (0);
}
*/

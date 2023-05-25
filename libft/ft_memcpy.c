/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:05:44 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 11:55:19 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d_cpy;
	unsigned char	*s_cpy;
	size_t			index;

	if (!dest && !src && n > 0)
		return (dest);
	d_cpy = (unsigned char *)dest;
	s_cpy = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		d_cpy[index] = s_cpy[index];
		index++;
	}
	return (d_cpy);
}
/*
int	main(void)
{
	unsigned char	dust[50] = "aaaaaaaaa";
	unsigned char	sun[50] = "vvvvvvv";

	printf("%p\n", ft_memcpy(NULL, NULL, 3));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:07:02 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 13:06:42 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	d;

	d = 0;
	if (!dst || size == 0)
		return (ft_strlen(src));
	if (!src)
		return (0);
	if (size != 0)
	{
		while (d < size -1 && src[d] != '\0')
		{
			dst[d] = src[d];
			d++;
		}
	}
	dst[d] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
		char	*dest = "BBB";
		char	buff1[0xF00];
		char	buff2[0xF00];

		memset(buff1, 'A', 20);
		memset(buff2, 'A', 20);
		printf("%zu\n%s\n", ft_strlcpy(buff1, dest, 0), buff1);
		printf("%zu\n%s\n", ft_strlcpy(buff2, dest, 0), buff2);
		return (0);
}
*/

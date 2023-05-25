/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:06:49 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/15 18:20:58 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	index;

	index = 0;
	if ((!dst || !src) && size == 0)
		return (0);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (ft_strlen(src) + size);
	while (src[index] && dst_len + 1 < size)
		dst[dst_len++] = src[index++];
	dst[dst_len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[index]));
}
/*
int	main(void)
{
		char	dest[] = "cominhos";
		char	src[] = "rrrrrrrrrrrrrr";

		printf("%zu\n", ft_strlcat(dest, src, 40));
		return 0;
}
*/

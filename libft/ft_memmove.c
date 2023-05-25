/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:05:54 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 11:54:26 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src && n > 0)
		return (NULL);
	if (dest > src)
	{
		while (n-- > 0)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int	main(void)
{
		char	str[] = "1234567890";
//		char	dst2[0xF0];
//		char	*data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
//		int		size = 0xF0 - 0xF;

//		memset(dst1, 'A', sizeof(dst1));
//		memset(dst2, 'A', sizeof(dst2));
//		memcpy(dst1, data, strlen(data));
//		memcpy(dst2, data, strlen(data));
//		printf("%p\n%p\n%p\n", memmove(dst1, dst1 + 3, size), dst1, dst1 + 3);
		printf("%s\n", (char *)ft_memmove(str + 3, str, 6));
	return (0);
}

0x7ffd229d9103

	char	*src = "is this a good nyancat!\r\n";
	char	dst1[0xF0];
	char	dst2[0xF0];
	int	size = ft_strlen(src);

	printf("%p\n%p\n", ft_memmove(dst1, src, size), memmove(dst2, src, size));
	printf("%d\n", memcmp(dst1, dst2, size));
	return (0);
}

	char	*src1 = "thanks to @pellicc for this test !\r\n";
	char	dst3[0xF0];
	char	dst4[0xF0];
	int	size2 = ft_strlen(src);

	printf("%p\n%p\n", ft_memmove(dst4, src1, size2), memmove(dst3, src1, size2));
	printf("%d\n", memcmp(dst4, dst3, size2));

	char	*src2 = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";
	char	dst5[0xF0];
	char	dst6[0xF0];
	int	size3 = 33;

	printf("%p\n%p\n", ft_memmove(dst5, src2, size3), memmove(dst6, src2, size3));
	printf("%d\n", memcmp(dst5, dst6, size3));
	return (0);
}
*/

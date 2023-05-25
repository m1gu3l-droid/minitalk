/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:06:17 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 12:50:22 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int c)
{
	int		index;
	int		len;

	index = 0;
	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + len);
	while (s[index] != '\0')
	{
		if (s[index] == c)
			return ((char *)s + index);
		index++;
	}
	return (NULL);
}
/*
int	main(void)
{
		char	src[] = "tdgvdvydljjd";
		char	ch = 'y';
		char	*ptr = ft_strchr(src, ch);

		printf("%s\n%s\n", ptr, strchr(src, ch));
		return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:07:47 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/03 15:07:50 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	d;

	d = ft_strlen(s);
	while (d >= 0)
	{
		if (s[d] == c)
			return ((char *)s + d);
		d--;
	}
	return (NULL);
}
/*
int	main(void)
{
		char	s1[] = "tartaruga";
		char	c = '0';
		char	*ptr = ft_strrchr(s1, c);

		printf("%s\n%s\n", ptr, strrchr(s1, c));
		return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:07:37 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 15:23:53 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((!little || !big) && len == 0)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && j + i < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
		char	*ptr = ft_strnstr(((void*)0), "fake", 0);
//		char	*cptr = strnstr(((void*)0), "fake", 0);
		printf("%s\n", ptr);
//		printf("%s\n", cptr);
		return 0;
}
*/

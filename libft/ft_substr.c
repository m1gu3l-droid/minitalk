/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:15:53 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 13:33:55 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	c;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		substr = malloc(sizeof(char) * 1);
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	substr = malloc(sizeof(char) * len + 1);
	if (substr == NULL)
		return (NULL);
	c = 0;
	i = start;
	while (i < ft_strlen(s) && len-- > 0)
		substr[c++] = s[i++];
	substr[c] = '\0';
	return (substr);
}
/*
int	main(void)
{
		char const	ss[] = "hjdhsjhdjdhsalasjdh";

		printf("%s\n", ft_substr(ss, 5, 7));
		return (0);
}
*/

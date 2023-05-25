/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:49:33 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 12:49:59 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*str_to_be;

	i = 0;
	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	str_to_be = (char *)malloc(sizeof(char) * size + 1);
	if (str_to_be == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		str_to_be[i] = f(i, s[i]);
		i++;
	}
	str_to_be[i] = '\0';
	return (str_to_be);
}
/*
char	f(unsigned int n, char c)
{
	char	str;
	
	n = 0;	
	str = c + n;
	return (str);
}

int	main(void)
{
	char const s[] = "novembro";
	char	*si;

	si = ft_strmapi(s, f);
	printf("%s\n", si);
	return (0);
}
*/

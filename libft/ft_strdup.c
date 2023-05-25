/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:06:28 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 12:51:21 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;

	d = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!d)
		return (NULL);
	i = 0;
	while (*s)
		d[i++] = *s++;
	d[i] = '\0';
	return (d);
}
/*
int	main(void)
{
	printf("%s\n", ft_strdup("ooooooooo"));
	return (0);
}
*/

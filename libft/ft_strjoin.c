/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:16:47 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 11:22:52 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = (ft_strlen(s1) + ft_strlen(s2) + 1);
	new = malloc(sizeof(char) * size);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, size);
	ft_strlcat(new, s2, size);
	return (new);
}
/*
int	main(void)
{
	char	s1[] = "lanche de ";
	char	s2[] = "vegetais";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/

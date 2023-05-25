/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:46:57 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 11:47:52 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	verify(char const *set, char s1)
{
	size_t	is;

	is = 0;
	while (set[is] != '\0')
	{
		if (set[is] == s1)
			return (1);
		is++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1trim;
	size_t	index;
	size_t	pos_a;
	size_t	pos_b;

	if (!s1)
		return (NULL);
	pos_a = 0;
	while (s1[pos_a] && verify(set, s1[pos_a]))
		pos_a++;
	pos_b = ft_strlen(s1);
	while (pos_b > pos_a && verify(set, s1[pos_b - 1]))
		pos_b--;
	if (set == NULL)
		return (ft_strdup(s1));
	s1trim = (char *)malloc(sizeof(char) * (pos_b - pos_a + 1));
	if (s1trim == NULL)
		return (NULL);
	index = 0;
	while (pos_a < pos_b)
		s1trim[index++] = s1[pos_a++];
	s1trim[index] = '\0';
	return (s1trim);
}
/*
int main(void)
{
	char	sone[] = "ddcadaniel alves maaddaa";
	char	stwo[] = "dacs";

	printf("%s\n", ft_strtrim(sone, stwo));
	return 0;
}
*/

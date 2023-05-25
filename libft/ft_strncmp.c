/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:07:22 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/07 20:14:05 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	n_cpy;

	i = 0;
	n_cpy = (int)n;
	if (n_cpy == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n_cpy)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
		char	one[] = "moeda";
		char	two[] = "modda";

		printf("%d\n", ft_strncmp(one, two, 4));
		return 0;
}
*/

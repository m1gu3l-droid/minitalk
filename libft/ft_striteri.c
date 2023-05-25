/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:25:06 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 11:29:49 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	f(unsigned int n, char *s)
{
	char	c = 'a';
	char	temp = 'c';

	n = 0;
	temp = *s;
	*s = c;
	c = temp;
}

int	main(void)
{
	char	str[] = "novembro\n";
	ft_strteri(str, f);
}
*/

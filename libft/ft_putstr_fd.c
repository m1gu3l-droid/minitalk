/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:03:08 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/10 14:58:13 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s || fd < 0)
		return ;
	i = ft_strlen(s);
	write(fd, s, i);
}
/*
int	main(void)
{
	char	s[] = "novembro\n";
	int	d = 1;

	ft_putstr_fd(s, d);
	return (0);
}
*/

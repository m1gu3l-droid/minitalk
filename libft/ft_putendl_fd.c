/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:03:32 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/16 12:07:34 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	s[] = "novembro";
	int	fd = 1;

	ft_putendl_fd(s, fd);
	return (0);
}
*/

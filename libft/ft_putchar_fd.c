/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:55:49 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/16 12:06:52 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

/*
int	main(void)
{
	char	c = 'a';
	int	fd = 1;

	ft_putchar_fd(c, fd);
	return (0);
}
*/

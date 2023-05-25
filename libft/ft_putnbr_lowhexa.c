/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_lowhexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:32:45 by fnovais-          #+#    #+#             */
/*   Updated: 2022/12/09 18:36:17 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_lowerhexa(long long nbr)
{
	int		size;
	char	*base;

	size = 0;
	base = "0123456789abcdef";
	if (nbr < 0)
	{
		size = write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 16)
	{
		size += ft_putnbr_lowerhexa((nbr / 16));
		size += ft_putnbr_lowerhexa((nbr % 16));
	}
	else
		size += ft_putchar(base[nbr]);
	return (size);
}

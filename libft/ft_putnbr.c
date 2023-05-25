/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:45:36 by fnovais-          #+#    #+#             */
/*   Updated: 2022/08/22 21:45:38 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_putnbr(long long n)
{
	unsigned int	nbr;
	unsigned int	size;

	size = 0;
	if (n < 0)
	{
		size += ft_putchar('-');
		nbr = n * -1;
	}
	else
		nbr = (unsigned int)n;
	if (n >= 10)
	{
		size += ft_putnbr(nbr / 10);
	}
	size += ft_putchar((char)(nbr % 10 + 48));
	return (size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:52:56 by fnovais-          #+#    #+#             */
/*   Updated: 2022/12/09 18:40:19 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sort(va_list ptr, char str)
{
	int	size;
	int	len_itoa;

	size = 0;
	len_itoa = 0;
	if (str == 'c')
		size += ft_putchar((va_arg(ptr, int)));
	if (str == 's')
		size += ft_putstr((va_arg(ptr, char *)));
	if (str == 'p')
		size += ft_putptr((va_arg(ptr, unsigned long long)));
	if (str == 'd' || str == 'i')
		size += ft_itoa_printf((va_arg(ptr, int)), len_itoa);
	if (str == 'u')
		size += ft_putnbr_unsigned((va_arg(ptr, unsigned int)));
	if (str == 'x')
		size += ft_putnbr_lowerhexa((va_arg(ptr, unsigned int)));
	if (str == 'X')
		size += ft_putnbr_upperhexa((va_arg(ptr, unsigned int)));
	if (str == '%')
		size += write(1, "%", 1);
	return (size);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	ptr;

	i = 0;
	len = 0;
	va_start(ptr, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			len += ft_sort(ptr, str[++i]);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(ptr);
	return (len);
}

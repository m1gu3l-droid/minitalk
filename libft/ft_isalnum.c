/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:04:24 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/03 15:04:26 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) + ft_isdigit(c));
}
/*
int	main(void)
{
		char	ch = 'V';

		printf("%d\n%d\n", ft_isalnum(ch), isalnum(ch));
}
*/

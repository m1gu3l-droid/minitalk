/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:04:13 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 13:33:03 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}
/*
int	main(void)
{
	printf("%p\n", ft_calloc(5, 5));
	return (0);
	//previous: line 28 -> ft_bzero(str, size);
}
*/

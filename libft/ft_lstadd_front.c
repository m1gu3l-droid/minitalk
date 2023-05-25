/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:47:54 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/16 12:08:15 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main(void)
{
	t_list *head;
	t_list *new;
	char	*str = "ola";
	char	str1[] = "adeus";

	new = ft_lstnew((char *)str);
	ft_lstadd_front(NULL, new);
	ft_putstr_fd(head->content, 1);
	new = ft_lstnew((char *)str1);
	ft_lstadd_front(&head, new);
	ft_putstr_fd(head->content, 1);
	return (0);
}
*/

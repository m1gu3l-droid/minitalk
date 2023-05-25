/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:46:57 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/16 12:05:38 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	}
}
/*
void	del(void *content)
{
	free(content);
}
int	main(void)
{
	t_list	*n1;
	t_list	*head;

	n1 = ft_lstnew(ft_strdup("str node 1"));
	head = n1;
	n1 = ft_lstnew(ft_strdup("str node 2"));
	n1->next = head;
	head = n1;
	n1 = ft_lstnew(ft_strdup("str node 3"));
	n1->next = head;
	head = n1;
	n1 = ft_lstnew(ft_strdup("str node 4"));
	n1->next = head;
	head = n1;
	ft_lstclear(&head, del);
	return (0);
}
*/

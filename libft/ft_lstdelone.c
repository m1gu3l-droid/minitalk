/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:30:12 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 11:30:26 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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

	head = ft_lstnew(NULL);;
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
	ft_lstdelone(head, del);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:55:27 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/16 12:06:24 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	new_list = 0;
	while (lst)
	{	
		element = ft_lstnew((*f)(lst->content));
		if (!element)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, element);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	*f(void *content)
{
	t_list	*f_test;

	f_test = ft_lstnew(ft_strdup("testee"));

	if (content)
		content = f_test->content;
	return (content);
}

void	del(void *content)
{
	free(content);
}

void	print_list(t_list *head)
{
	t_list	*temp;
	
	temp = head;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
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
	head = ft_lstmap(head, *f, del);
	print_list(head);	
	return (0);
}
*/

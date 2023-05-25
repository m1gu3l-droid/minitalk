/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:50:40 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 12:51:04 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last = ft_lstlast(*(lst));
			last->next = new;
		}
	}
}
/*
void	print_list(t_list *head)
{
	t_list	*temp;
	
	temp = head;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
//	printf("\n");
}

int	main(void)
{
	t_list	*n1;
	t_list	*n4;
	t_list	*head;

	head = ft_lstnew(NULL);
	char	str1[] = "str node 1";
	char	str2[] = "str node 2";
	char	str3[] = "str node 3";
	char	str4[] = "str node 4";

	n1 = ft_lstnew((void *)str1);
	head = n1;
	n1 = ft_lstnew((void *)str2);
	n1->next = head;
	head = n1;
	n1 = ft_lstnew((void *)str3);
	n1->next = head;
	head = n1;
	n4 = ft_lstnew((void *)str4);
	ft_lstadd_back(&head, n4); 
	print_list(head);
	return (0);
}
*/

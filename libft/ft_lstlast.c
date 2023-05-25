/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:48:42 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 12:49:19 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*last;
	char	str[] = "AMORIM ";
	char	str1[] = " ";
	char	str2[] = "MIGUEL";

	head = malloc(sizeof(t_list));
	last = malloc(sizeof(t_list));
	ft_lstadd_front(&head, ft_lstnew((void *)str));
//	printf("%s\n", (char *)(ft_lstlast(head)->content));
	ft_lstadd_front(&head, ft_lstnew((void *)str2));
	ft_lstadd_front(&head, ft_lstnew((void *)str1));
	last = ft_lstlast(head);
	printf("%s\n", (char *)last->content);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:45:38 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 12:45:40 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*new;
	char	*str = "Amorim";
	char	str1[] = " ";
	char	str2[] = "Miguel";
	
	head = malloc(sizeof(t_list));
	new = ft_lstnew((void *)str);
	ft_lstadd_front(&head, new);
//	ft_putstr_fd(head->content, 1);
	new = ft_lstnew((char *)str1);
	ft_lstadd_front(&head, new);
//	ft_putstr_fd(head->content, 1);
	new = ft_lstnew((char *)str2);
	ft_lstadd_front(&head, new);
//	ft_putstr_fd(head->content, 1);
	printf("%d\n", ft_lstsize(head));
	while (head->next != NULL)
	{
		ft_putstr_fd(head->content, 1);
		head= head->next;
	}
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 14:06:47 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/25 19:39:41 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// Main function for testing purposes only
int	main(void)
{
	t_list	*test_list1;
	t_list	*test_list2;
	t_list	*current_node;

	test_list1 = ft_lstnew("Testlist 1!");
	test_list2 = ft_lstnew("Testlist 2!");
	ft_lstadd_front(&test_list1, test_list2);
	current_node = test_list1;
	while (current_node != NULL)
	{
		printf("The content is: %s\n", (char *)current_node->content);
		current_node = current_node->next;
	}
	ft_lstclear(&test_list1, NULL);
	return (0);
}

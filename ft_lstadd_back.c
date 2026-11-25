/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 18:52:51 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/25 19:39:33 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

// Main function for testing purposes only
// int	main(void)
// {
// 	t_list	*test_list1;
// 	t_list	*test_list2;
// 	t_list	*current_node;
// 	t_list	*null_list;

// 	null_list = NULL;
// 	test_list1 = ft_lstnew("Testlist 1!");
// 	test_list2 = ft_lstnew("Testlist 2!");
// 	ft_lstadd_back(&null_list, test_list1);
// 	ft_lstadd_back(&test_list1, test_list2);
// 	current_node = null_list;
// 	while (current_node != NULL)
// 	{
// 		printf("The content is: %s\n", (char *)current_node->content);
// 		current_node = current_node->next;
// 	}
// 	ft_lstclear(&null_list, NULL);
// 	return (0);
// }

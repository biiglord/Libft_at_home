/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 19:17:54 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/25 20:54:34 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

// Main and helper functions for testing purposes only
// static void	test_del(void *content)
// {
// 	printf("-= DELETING NOW: '%s' =-\n", (char *)content);
// 	free(content);
// }

// int	main(void)
// {
// 	t_list			*test_list;
// 	t_list			*current;

// 	test_list = ft_lstnew(ft_strdup("Node 1: beginning!"));
// 	ft_lstadd_back(&test_list, ft_lstnew(ft_strdup("Node 2: middle!")));
// 	ft_lstadd_back(&test_list, ft_lstnew(ft_strdup("Node 3: end!")));
// 	current = test_list;
// 	while (current != NULL)
// 	{
// 		printf("Before clearing: %s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	ft_lstclear(&test_list, test_del);
// 	if (test_list == NULL)
// 		printf("-= ALL NODES CLEARED! =-\n");
// 	return (0);
// }

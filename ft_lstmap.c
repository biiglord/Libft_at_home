/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 19:55:43 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/26 21:24:52 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*n_node;
	void	*f_content;

	if (!lst || !f || !del)
		return (NULL);
	n_list = NULL;
	while (lst)
	{
		f_content = f(lst->content);
		n_node = ft_lstnew(f_content);
		if (!n_node)
		{
			del(f_content);
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		ft_lstadd_back(&n_list, n_node);
		lst = lst->next;
	}
	return (n_list);
}

// Main and helper functions for testing purposes only
// static void	*adding_ten(void *content)
// {
// 	int	*new_value;

// 	new_value = malloc(sizeof(int));
// 	if (!new_value)
// 		return (NULL);
// 	*new_value = *(int *)content + 10;
// 	return (new_value); 
// }

// static void	*doubling(void *content)
// {
// 	int	*new_value;

// 	new_value = malloc(sizeof(int));
// 	if (!new_value)
// 		return (NULL);
// 	*new_value = *(int *)content * 2;
// 	return (new_value);
// }

// int	main(void)
// {
// 	t_list	*test_list;
// 	t_list	*new_list;
// 	t_list	*cur_list;
// 	int		digit;
// 	int		nmb;

// 	digit = 8;
// 	nmb = 14;
// 	test_list = ft_lstnew(&digit);
// 	ft_lstadd_back(&test_list, ft_lstnew(&nmb));
// 	cur_list = test_list;
// 	while (cur_list)
// 	{
// 		printf("This list contains: %d\n", *(int *)cur_list->content);
// 		cur_list = cur_list->next;
// 	}
// 	printf("-= APPLYING FUNCTION =-\n");
// 	new_list = ft_lstmap(test_list, doubling, free);
// 	cur_list = new_list;
// 	while (cur_list)
// 	{
// 		printf("This new list contains: %d\n", *(int *)cur_list->content);
// 		cur_list = cur_list->next;
// 	}
// 	printf("Original list still contains: %d and %d\n",
// 		*(int *)test_list->content, *(int *)test_list->next->content);
// 	ft_lstclear(&test_list, NULL);
// 	ft_lstclear(&new_list, free);
// 	return (0);
// }

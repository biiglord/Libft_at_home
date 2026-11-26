/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 19:37:08 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/26 20:09:13 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// Main and helper functions for testing purposes only
// static void adding_ten(void *content)
// {
// 	*(int *)content += 10; 
// }

// static void doubling(void *content)
// {
// 	*(int *)content *= 2; 
// }

// int	main(void)
// {
// 	t_list	*test_list;
// 	t_list	*test_list2;
// 	t_list	*cur_list;
// 	int	digit = 8;
// 	int	nmb = 14;

// 	test_list = ft_lstnew(&digit);
// 	test_list2 = ft_lstnew(&nmb);
// 	ft_lstadd_back(&test_list, test_list2);
// 	cur_list = test_list;
// 	while (cur_list)
// 	{
// 		printf("This list contains: %d\n", *(int *)cur_list->content);
// 		cur_list = cur_list->next;
// 	}
// 	printf("-= APPLYING FUNCTION =-\n");
// 	ft_lstiter(test_list, doubling);
// 	cur_list = test_list;
// 	while (cur_list)
// 	{
// 		printf("Now it contains: %d\n", *(int *)cur_list->content);
// 		cur_list = cur_list->next;
// 	}
// 	ft_lstclear(&test_list, NULL);
// 	return (0);
// }
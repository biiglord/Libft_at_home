/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 18:27:09 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/25 19:11:35 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	t_list	*test_head;
// 	t_list	*test_list2;
// 	t_list	*test_list3;

// 	test_head = ft_lstnew("Test list 3");
// 	test_list2 = ft_lstnew("Test list 2");
// 	test_list3 = ft_lstnew("Test list 1");
// 	ft_lstadd_front(&test_head, test_list2);
// 	ft_lstadd_front(&test_head, test_list3);
// 	printf("The last node has the content: %s\n",
//  			(char *)ft_lstlast(test_head)->content);
// 	ft_lstclear(&test_head, NULL);
// 	return (0);
// }
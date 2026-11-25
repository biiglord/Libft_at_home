/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 18:16:02 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/25 17:37:12 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	t_list	*test_head;
// 	t_list	*test_list2;
// 	t_list	*test_list3;

// 	test_head = ft_lstnew("Test list 1");
// 	test_list2 = ft_lstnew("Test list 2");
// 	test_list3 = ft_lstnew("Test list 3");
// 	ft_lstadd_front(&test_head, test_list2);
// 	ft_lstadd_front(&test_head, test_list3);
// 	printf("The list size is: %d\n", ft_lstsize(test_head));
//	ft_lstclear(&test_head, NULL);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:29:25 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/25 18:41:33 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	char	test[] = "Testing!";
// 	char	test2[] = "Testing!";
// 	t_list	*test_list;

// 	test_list = ft_lstnew(test);
// 	if (test_list->next == NULL)
// 		printf("test_list has a NULL next value!\n");
// 	if (test_list->content != test2)
// 		printf("test_list has an original string in its content!\n");
// 	printf("That content is: %s\n", (char *)test_list->content);
// 	ft_lstdelone(test_list, NULL);
// 	return (0);
// }

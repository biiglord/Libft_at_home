/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 19:14:53 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/25 19:38:42 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// Main and helper functions for testing purposes only
// static void	test_del(void *content)
// {
// 	printf("-= DELETING NOW: '%s' =-\n", (char *)content);
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*test_list1;
// 	char	*test_str;

// 	test_str = ft_strdup("I'm gonna be deleted! =D");
// 	test_list1 = ft_lstnew(test_str);
// 	printf("test_list 1 has this content: %s\n", (char *)test_list1->content);
// 	ft_lstdelone(test_list1, test_del);
// 	printf("-= CONTENT DELETED =-\n");
// 	printf("test_list 1 is a free pointer now, no socks needed!\n");
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:59:38 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/18 13:19:27 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// Commented below are tests for all ft_lst functions
// del_content frees dynamically allocated node content
// used for delone, clear, and map
static void	del_content(void *content)
{
	free(content);
}

// print_node prints a node's string content
// used for ft_lstiter
static void	print_node(void *content)
{
	printf("[%s] -> ", (char *)content);
}

// to_upper_inplace uppercases a string in-place
// used for ft_lstiter
static void	to_upper_inplace(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		str[i] = (char)ft_toupper((unsigned char)str[i]);
		i++;
	}
}

// wrap_brackets duplicates and wraps string in brackets
// used for ft_lstmap
static void	*wrap_brackets(void *content)
{
	char	*orig;
	char	*mapped;
	size_t	len;

	orig = (char *)content;
	len = ft_strlen(orig);
	mapped = malloc(len + 3);
	if (!mapped)
		return (NULL);
	mapped[0] = '(';
	ft_memcpy(mapped + 1, orig, len);
	mapped[len + 1] = ')';
	mapped[len + 2] = '\0';
	return (mapped);
}

// print_list prints the content of the node
static void	print_list(const char *label, t_list *lst)
{
	printf("%s:\n", label);
	ft_lstiter(lst, print_node);
	printf("NULL (size: %u)\n", (unsigned int)ft_lstsize(lst));
}

// below is the main function that runs everything above
int	main(void)
{
	t_list	*head;
	t_list	*mapped;
	t_list	*extra;

	head = NULL;
	printf("--== 1st: ft_lstnew, ft_lstadd_front, ft_lstadd_back ==--\n");
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("middle")));
	ft_lstadd_front(&head, ft_lstnew(ft_strdup("first")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("last")));
	print_list("Initial list", head);
	printf("\n--== 2nd: ft_lstlast & ft_lstsize ==--\n");
	printf("Last node content:\n%s\n", (char *)ft_lstlast(head)->content);
	printf("Empty list last/size:\n%p / %u\n",
		(void *)ft_lstlast(NULL), (unsigned int)ft_lstsize(NULL));
	printf("\n--== 3rd: ft_lstiter (in-place modification) ==--\n");
	ft_lstiter(head, to_upper_inplace);
	print_list("After uppercase iter", head);
	printf("\n--== 4th: ft_lstmap (new allocated list) ==--\n");
	mapped = ft_lstmap(head, wrap_brackets, del_content);
	print_list("Original list", head);
	print_list("Mapped list", mapped);
	printf("\n--== 5th: ft_lstdelone (isolated node) ==--\n");
	extra = ft_lstnew(ft_strdup("temporary node"));
	printf("Deleting isolated node: %s\n", (char *)extra->content);
	ft_lstdelone(extra, del_content);
	printf("\n--== 6th: ft_lstclear (full cleanup) ==--\n");
	ft_lstclear(&head, del_content);
	ft_lstclear(&mapped, del_content);
	printf("After clear pointers: head=%p, mapped=%p\n",
		(void *)head, (void *)mapped);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:47:56 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/13 18:26:52 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	int		compare;

	index = 0;
	compare = 0;
	while ((index < n) && compare == 0 && (s1[index] != '\0'
			|| s2[index] != '\0'))
	{
		compare = (unsigned char)s1[index] - (unsigned char)s2[index];
		index++;
	}
	return (compare);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	char	*str1 = "abcdef";
// 	char	*str2 = "ascdef";

// 	printf("Survey says: %d\n", strncmp(str1, str2, 1));
// 	printf("Another survey says: %d\n", ft_strncmp(str1, str2, 1));
// 	return (0);
// }

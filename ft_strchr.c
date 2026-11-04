/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:15:42 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/04 19:28:00 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)(s + i));
}

// Main function for testing purposes only
// int	main(void)
// {
// 	char	*test = NULL;
// 	char	*test2 = NULL;
// 	printf("First string: %s\n", test);
// 	test = ft_strchr(test, 128);
// 	printf("Current string: %s\n", test);
// 	printf("SECOND TEST\nFirst string: %s\n", test2);
// 	test2 = strchr(test2, 128);
// 	printf("Current string: %s\n", test2);
// 	return (0);
// }
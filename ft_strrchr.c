/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 19:29:04 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/04 19:45:44 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s[i] != (char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *)(s + i));
}

// Main function for testing purposes only
// int	main(void)
// {
// 	char	*test = "Helloe!";
// 	char	*test2 = "Helloe!";
// 	printf("First string: %s\n", test);
// 	test = ft_strrchr(test, 'e');
// 	printf("Current string: %s\n", test);
// 	printf("SECOND TEST\nFirst string: %s\n", test2);
// 	test2 = strrchr(test2, 'e');
// 	printf("Current string: %s\n", test2);
// 	return (0);
// }

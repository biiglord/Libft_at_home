/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:03:54 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/13 18:23:06 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size)
	{
		while (count < size - 1)
		{
			dest[count] = src[count];
			if (src[count] == '\0')
				return (count);
			count++;
		}
		dest[count] = '\0';
	}
	while (src[count] != '\0')
		count++;
	return (count);
}

// Main function for testing purposes only 
// int	main(void)
// {
// 	char	end[] = "XXXXXXXXXX";
// 	char	strt[] = "hi";
// 	size_t	n = 3;
// 	size_t	length = 0;

// 	printf("The starting string is: %s\n", strt);
// 	printf("The ending string is: %s\n", end);
// 	length = ft_strlcpy(end, strt, n);
// 	printf("The length of the copied string is: %zu\n", length);
// 	printf("The ending string is now: %s\n", end);
// 	return (0);
// }

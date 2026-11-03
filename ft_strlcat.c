/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:56:44 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/03 20:22:30 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	dest_l;

	count = 0;
	dest_l = ft_strlen(dest);
	if (size <= dest_l)
		return (size + ft_strlen(src));
	if (size)
	{
		while ((dest_l + count) < (size - 1))
		{
			dest[count + dest_l] = src[count];
			if (src[count] == '\0')
				return (dest_l + count);
			count++;
		}
		dest[dest_l + count] = '\0';
	}
	while (src[count] != '\0')
		count++;
	return (count + dest_l);
}

// Main function for testing purposes only 
// int	main(void)
// {
// 	char	end[32] = "Hello";
// 	char	strt[32] = "h3llo";
// 	size_t	n = 5;
// 	size_t	length = 0;

// 	printf("The starting string is: %s\n", strt);
// 	printf("The ending string is: %s\n", end);
// 	length = ft_strlcat(end, strt, n);
// 	printf("The length of the copied string is: %zu\n", length);
// 	printf("The ending string is now: %s\n", end);
// 	return (0);
// }

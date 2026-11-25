/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:56:44 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/20 17:14:06 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_l;
	size_t	src_l;

	if (!dest && size == 0)
		return (ft_strlen(src));
	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	if (size <= dest_l)
		return (size + src_l);
	i = 0;
	while (src[i] && (dest_l + i) < (size - 1))
	{
		dest[i + dest_l] = src[i];
		i++;
	}
	dest[dest_l + i] = '\0';
	return (src_l + dest_l);
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

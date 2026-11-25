/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:22:12 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/20 17:33:00 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		d = (unsigned char *)dest;
		s = (const unsigned char *)src;
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
		return (dest);
	}
	return (ft_memcpy(dest, src, n));
}

// Main function for testing purposes only
// int	main(void)
// {
// 	char	str[] = "ABCDEFGHI";
// 	char	str2[] = "ABCDEFGHI";

// 	printf("Before the 1st test: %s\n", str);
// 	ft_memmove(str, str + 2, 4);
// 	printf("After the 1st test: %s\n", str);
// 	printf("Before the 2nd test: %s\n", str2);
// 	memmove(str2, str2 + 2, 4);
// 	printf("After the 2nd test: %s\n", str2);
// 	return (0);
// }
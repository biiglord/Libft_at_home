/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:22:12 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/29 16:43:02 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
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
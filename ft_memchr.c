/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:25:07 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/05 18:35:36 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	unsigned char	stuff[] = {0x00, 0xFF, 0x42, 0x12, 0xAA};
// 	unsigned char	*ft_result;
// 	unsigned char	*norm_result;

// 	ft_result = ft_memchr(stuff, 0x12, 5);
// 	norm_result = memchr(stuff, 0x12, 5);
// 	if (ft_result == norm_result)
// 		printf("Pointers match! Result: %ld\n\n", ft_result - stuff);
// 	else
// 		printf("Uh oh, pointers don't match...\n\n");
// 	ft_result = ft_memchr(stuff, 0x42, 2);
// 	if (ft_result == NULL)
// 		printf("Returned NULL when n is too small, yay!");
// 	return (0);
// }

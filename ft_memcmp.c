/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 18:36:01 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/13 18:22:23 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;
	int					res;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		res = ptr1[i] - ptr2[i];
		if (res != 0)
			return (res);
		i++;
	}
	return (0);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	unsigned char	stuff[] = {0x00, 0xFE, 0x42, 0x12, 0xAA};
// 	unsigned char	stuff2[] = {0x00, 0x00, 0x42, 0x12, 0xAA};
// 	int				ft_result;
// 	int				norm_result;

// 	ft_result = ft_memcmp(stuff, stuff2, 2);
// 	norm_result = memcmp(stuff, stuff2, 3);
// 	if (ft_result == norm_result)
// 		printf("It matches! Result: %d\n\n", ft_result);
// 	else
// 		printf("Uh oh, it doesn't match...\n\n");
// 	ft_result = ft_memcmp(stuff, stuff2, 0);
// 	if (ft_result == 0)
// 		printf("Returned zero when n is too small, yay!");
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:11:24 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/28 18:38:03 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s2;
	size_t			i;

	s2 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s2[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	char	str[] = "Hello World";

// 	printf("Before the 1st test: %s\n", str);
// 	ft_memset(str, 'x', 5);
// 	printf("After the 1st test: %s\n", str);
// 	return (0);
// }

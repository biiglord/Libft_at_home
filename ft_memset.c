/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:11:24 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/28 13:39:51 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned char	*s2;
	unsigned int	i;

	s2 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s2[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[] = "Hello World";

// 	printf("Before the 1st test: %s\n", str);
// 	ft_memset(str, 'x', 5);
// 	printf("After the first test: %s\n", str);
// 	return (0);
// }

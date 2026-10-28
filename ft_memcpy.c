/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:13:49 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/28 21:41:45 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	int	arr1[] = {1, 2, 3};
// 	int	arr1b[] = {1, 2, 3};
// 	int	arr2[] = {0, 0, 0};
// 	int	arr2b[] = {0, 0, 0};
// 	int	i;

// 	printf("Before the first test, arr1\n");
// 	i = 0;
// 	while (i < 3)
// 	{
// 		printf("%d\n", arr1[i]);
// 		i++;
// 	}
// 	printf("Before the first test, arr2\n");
// 	i = 0;
// 	while (i < 3)
// 	{
// 		printf("%d\n", arr2[i]);
// 		i++;
// 	}
// 	ft_memcpy(arr2, arr1, sizeof(int) * 6);
// 	memcpy(arr2b, arr1b, sizeof(int) * 6);
// 	printf("After the first test, arr1\n");
// 	i = 0;
// 	while (i < 3)
// 	{
// 		printf("%d\n", arr1[i]);
// 		i++;
// 	}
// 	printf("After the first test, arr2\n");
// 	i = 0;
// 	while (i < 3)
// 	{
// 		printf("%d\n", arr2[i]);
// 		i++;
// 	}
// 	printf("After the first test, arr1b\n");
// 	i = 0;
// 	while (i < 3)
// 	{
// 		printf("%d\n", arr1b[i]);
// 		i++;
// 	}
// 	printf("After the first test, arr2b\n");
// 	i = 0;
// 	while (i < 3)
// 	{
// 		printf("%d\n", arr2b[i]);
// 		i++;
// 	}
// 	return (0);
// }

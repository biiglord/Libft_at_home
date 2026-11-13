/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 16:17:10 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/13 18:21:07 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

// Main function for testing purposes only
// int	main(void)
// {
// 	int	arr[] = {1, 2, 3};
// 	int	i;

// 	printf("Before the first test:\n");
// 	i = 0;
// 	while (i < 3)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	ft_bzero(arr, sizeof(int)*3);
// 	printf("After the first test:\n");
// 	i = 0;
// 	while (i < 3)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }

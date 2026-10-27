/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:54:21 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/27 13:37:03 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("Test 1: %d\n", ft_isascii(90));
// 	printf("Test 2: %d\n", ft_isascii(134));
// 	printf("Test 3: %d\n", ft_isascii(160));
// 	printf("Test 4: %d\n", ft_isascii(120));

// 	return (0);
// }

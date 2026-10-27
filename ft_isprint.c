/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:42:30 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/27 13:49:06 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isprint(int c)
{
	if (c < 32 || c == 127)
		return (0);
	else
		return (1);
}

// int	main(void)
// {
// 	printf("Test 1: %d\n", ft_isprint(123));
// 	printf("Test 2: %d\n", ft_isprint(24));
// 	printf("Test 3: %d\n", ft_isprint(127));
// 	return (0);
// }

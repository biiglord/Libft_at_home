/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:18:14 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/28 18:38:26 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	printf("Test 1: %d\n", ft_isalpha('c'));
// 	printf("Test 2: %d\n", ft_isalpha('*'));
// 	printf("Test 3: %d\n", ft_isalpha('A'));
// 	return (0);
// }

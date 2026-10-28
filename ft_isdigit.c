/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:35:00 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/28 18:38:17 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	printf("Test 1: %d\n", ft_isdigit('0'));
// 	printf("Test 2: %d\n", ft_isdigit('3'));
// 	printf("Test 3: %d\n", ft_isdigit('A'));
// 	return (0);
// }

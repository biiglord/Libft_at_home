/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:37:30 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/28 18:38:31 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	printf("Test 1: %d\n", ft_isalnum('c'));
// 	printf("Test 2: %d\n", ft_isalnum('7'));
// 	printf("Test 3: %d\n", ft_isalnum('*'));
// 	printf("Test 4: %d\n", ft_isalnum(' '));

// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:53:36 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/13 18:28:26 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + 32);
	else
		return (c);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	char	letter = 'D';

// 	printf("The letter is: %c\n", letter);
// 	letter = ft_tolower(letter);
// 	printf("Was turned into: %c\n", letter);

// 	return (0);
// }

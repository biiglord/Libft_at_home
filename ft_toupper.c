/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:05:44 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/13 18:28:37 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (c - 32);
	else
		return (c);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	char	letter = 'a';
// 	int	i = -1;

// 	printf("The letter is: %c\n", letter);
// 	letter = ft_toupper(letter);
// 	printf("Was turned into: %c\n", letter);

// 	printf("The 2nd letter is: %d\n", i);
// 	letter = ft_toupper(letter);
// 	printf("Was turned into: %d\n", i);
// 	return (0);
// }

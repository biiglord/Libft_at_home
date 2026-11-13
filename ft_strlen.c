/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:04:46 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/13 18:26:46 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	char	*string = "four";
// 	size_t	length;

// 	length = ft_strlen(string) + '0';
// 	printf("The length is: %zu\n", length);
// 	return (0);
// }

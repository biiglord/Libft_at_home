/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:04:46 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/03 20:15:52 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
// 	char	length;

// 	length = ft_strlen(string) + '0';
// 	write (1, "The length is: ", 15);
// 	write (1, &length, 1);
// 	write (1, "\n", 1);
// 	return (0);
// }

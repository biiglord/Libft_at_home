/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:04:46 by filimigu          #+#    #+#             */
/*   Updated: 2026/10/28 13:24:57 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

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

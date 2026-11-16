/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:07:44 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/16 17:09:03 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// #include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// // functions for testing purposes only
// void	alternator_iteri(unsigned int index, char *c)
// {
// 	if (index % 2 == 0)
// 	{
// 		if ((*c >= 65) && (*c <= 90))
// 			*c += 32;
// 	}
// 	else
// 	{
// 		if ((*c >= 97) && (*c <= 122))
// 			*c -= 32;
// 	}
// }

// int	main(void)
// {
// 	char	test[] = "";

// 	printf("Original: %s\n", test);
// 	ft_striteri(test, &alternator_iteri);
// 	printf("Modified: %s\n", test);
// 	return (0);
// }

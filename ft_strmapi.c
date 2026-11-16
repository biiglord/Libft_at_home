/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:30:37 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/16 15:03:34 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*result;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// functions for testing purposes only
// char	alternator(unsigned int index, char c)
// {
// 	char	res;

// 	res = c;
// 	if (index % 2 == 0)
// 	{
// 		if ((c >= 65) && (c <= 90))
// 			res = c + 32;
// 	}
// 	else
// 	{
// 		if ((c >= 97) && (c <= 122))
// 			res = c - 32;
// 	}
// 	return (res);
// }

// int	main(void)
// {
// 	char	*test = "Hello, I'm testing! One two three four testing!";
// 	char	*test2;

// 	test2 = ft_strmapi(test, &alternator);
// 	printf("Original: %s\n", test);
// 	printf("Modified: %s\n", test2);
// 	free (test2);
// 	return (0);
// }

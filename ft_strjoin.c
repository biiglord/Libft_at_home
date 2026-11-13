/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:13:09 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/13 19:08:29 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined_str = malloc(total_len);
	if (!joined_str)
		return (NULL);
	ft_strlcpy(joined_str, s1, total_len);
	ft_strlcat(joined_str, s2, total_len);
	return (joined_str);
}

// int	main(void)
// {
// 	char	*test1 = "Hello!";
// 	char	*test2 = "";
// 	char	*test3 = ft_strjoin(test1, test2);

// 	printf("The joined string is: %s\n", test3);
// 	free(test3);
// 	return (0);
// }
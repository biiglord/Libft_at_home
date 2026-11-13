/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:30:42 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/13 15:28:32 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	len_s;
	size_t	len_real;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s < start)
	{
		sub_s = malloc(1);
		if (!sub_s)
			return (NULL);
		sub_s[0] = '\0';
		return (sub_s);
	}
	if (len_s - start > len)
		len_real = len + 1;
	if (len_s - start <= len)
		len_real = len_s - start + 1;
	sub_s = malloc(len_real);
	if (!sub_s)
		return (NULL);
	len_s = ft_strlcpy(sub_s, s + start, len_real);
	return (sub_s);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	char *str = "";
// 	char *sub_str = ft_substr(str, 0, 30);

// 	if (!sub_str)
// 		printf("NULL DETECTED!");
// 	printf("Testing testing: %s\n", sub_str);
// 	if (!sub_str[0])
// 		printf("Empty string detected!\n");
// 	free(sub_str);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:37:42 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/12 18:30:45 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dupl;
	size_t	i;

	dupl = malloc(ft_strlen(src) + 1);
	if (!dupl)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dupl[i] = src[i];
		i++;
	}
	dupl[i] = '\0';
	return (dupl);
}

// Main function for testing purposes only
// int	main(void)
// {
// 	char	*temp = "a";
// 	char	*temp2;

// 	printf("This is the string: %s\nDUPLICATING\n", temp);
// 	temp2 = strdup(NULL);
// 	printf("This is the duplicated string: %s\n", temp2);
// 	free(temp2);
// 	return (0);
// }

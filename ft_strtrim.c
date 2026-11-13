/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 19:09:12 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/13 19:46:55 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trm_s1;
	size_t	i_start;
	size_t	i_end;

	if (!s1 || !set)
		return (NULL);
	i_start = 0;
	while (s1[i_start] && ft_strchr(set, s1[i_start]))
		i_start++;
	i_end = ft_strlen(s1);
	while (i_end > i_start && ft_strchr(set, s1[i_end - 1]))
		i_end--;
	trm_s1 = malloc(i_end - i_start + 1);
	if (!trm_s1)
		return (NULL);
	ft_strlcpy(trm_s1, s1 + i_start, i_end - i_start + 1);
	return (trm_s1);
}

int	main(void)
{
	char	*str1 = "zHello!x";
	char	*str2 = "xyz";
	char	*str3;

	str3 = ft_strtrim(str1, str2);
	printf("The trimmed string is: %s\n", str3);
	if (str3[0] == '\0')
		printf("That's an empty string!\n");
	free(str3);
	return (0);
}
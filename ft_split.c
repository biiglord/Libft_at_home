/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 03:22:56 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/25 19:10:30 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static size_t	word_counter(char const *s, char c)
{
	size_t	counter;
	size_t	i;
	int		in_word;

	counter = 0;
	i = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			counter++;
		}
		i++;
	}
	return (counter);
}

static char	**freer(char **strings, size_t index)
{
	if (!strings)
		return (NULL);
	while (index > 0)
		free(strings[--index]);
	free(strings);
	return (NULL);
}

static char	**fill_array(char **strings, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		strings[j] = ft_substr(s, start, i - start);
		if (!strings[j])
			return (freer(strings, j));
		j++;
	}
	strings[j] = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = word_counter(s, c);
	strings = malloc(sizeof(char *) * (word_count + 1));
	if (!strings)
		return (NULL);
	return (fill_array(strings, s, c));
}

// Main function for testing purposes only
// int	main(void)
// {
// 	char	*test1 = "One- two -THREE- four-- FIVE FIVE? FIVE?-s1x";
// 	char	**test2;
// 	size_t	i;

// 	test2 = ft_split(test1, '-');
// 	if (!test2)
// 		return (1);
// 	i = 0;
// 	while (test2[i])
// 	{
// 		printf("Word #%zu: %s\n", i + 1, test2[i]);
// 		i++;
// 	}
// 	freer(test2, i);
// 	test2 = ft_split(test1, ' ');
// 	if (!test2)
// 		return (1);
// 	i = 0;
// 	while (test2[i])
// 	{
// 		printf("Word #%zu: %s\n", i + 1, test2[i]);
// 		i++;
// 	}
// 	freer(test2, i);
// 	return (0);
// }

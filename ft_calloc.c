/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 23:27:13 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/10 17:15:20 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t 			i;

	temp = malloc(size * nmemb);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}

int	main(void)
{
	return (0);
}
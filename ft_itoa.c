/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:29:22 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/25 21:13:48 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	len_finder(int n)
{
	long	nb;
	int		len;

	if (n < 10 && n >= 0)
		return (1);
	nb = n;
	len = 1;
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb / 10 != 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*str;

	len = len_finder(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	nb = n;
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

// Main function for testing purposes only
int	main(void)
{
	int		test = -2147483648;
	char	*string;

	string = ft_itoa(test);
	printf("The number is: %s\n", string);
	free (string);
	return (0);
}

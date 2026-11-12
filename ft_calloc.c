/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filimigu <filimigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 23:27:13 by filimigu          #+#    #+#             */
/*   Updated: 2026/11/12 17:53:20 by filimigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	result;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	result = nmemb * size;
	if (result != 0 && result / nmemb != size)
		return (NULL);
	ptr = malloc(result);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, result);
	return (ptr);
}

// Main function for testing purposes only
// void	ft_putnbr(int nb)
// {
// 	char	w;

// 	if (nb == -2147483648)
// 	{
// 		write(1, "-", 1);
// 		write(1, "2147483648", 10);
// 		return ;
// 	}
// 	if (nb < 0)
// 	{
// 		write(1, "-", 1);
// 		nb = -nb;
// 	}
// 	if (nb <= 9 && nb >= 0)
// 	{
// 		w = nb + '0';
// 		write(1, &w, 1);
// 	}
// 	if (nb > 9)
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putnbr(nb % 10);
// 	}
// }

// int	main(void)
// {
// 	int *test;
// 	int i;
// 	test = ft_calloc(0, sizeof(int));
// 	i = 0;
// 	while (i < 0)
// 	{
// 		ft_putnbr(test[i]);
// 		write(1, ", ", 2);
// 		i++;
// 	}
// 	if (!calloc(-1, 1))
// 		printf("ERROR (success!)");
// 	return (0);
// }

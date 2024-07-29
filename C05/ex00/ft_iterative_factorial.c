/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:15:33 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/28 23:05:08 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main()

{
	printf("0 : %d\n", ft_iterative_factorial(-10));
	printf("0 : %d\n", ft_iterative_factorial(-1));
	printf("1 : %d\n", ft_iterative_factorial(0));
	printf("1 : %d\n", ft_iterative_factorial(1));
	printf("3628800 : %d\n", ft_iterative_factorial(10));
	printf("6 : %d\n", ft_iterative_factorial(3));
//	printf("0 : %d\n", ft_recursive_factorial())
//	printf("0 : %d\n", ft_recursive_factorial())
//	printf("0 : %d\n", ft_recursive_factorial())
//	printf("0 : %d\n", ft_recursive_factorial())
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 22:32:40 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/28 23:04:22 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main()

{
	printf("0 : %d\n", ft_recursive_factorial(-10));
	printf("0 : %d\n", ft_recursive_factorial(-1));
	printf("1 : %d\n", ft_recursive_factorial(0));
	printf("1 : %d\n", ft_recursive_factorial(1));
	printf("362880 : %d\n", ft_recursive_factorial(10));
	printf("6 : %d\n", ft_recursive_factorial(3));
//	printf("0 : %d\n", ft_recursive_factorial())
//	printf("0 : %d\n", ft_recursive_factorial())
//	printf("0 : %d\n", ft_recursive_factorial())
//	printf("0 : %d\n", ft_recursive_factorial())
	
}
*/
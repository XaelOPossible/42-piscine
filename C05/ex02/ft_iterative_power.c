/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 23:07:18 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/28 23:18:05 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nbr;

	nbr = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		nbr *= nb;
		power--;
	}
	return (nbr);
}
/*
#include <stdio.h>

int main()
{
	printf("0 : %d\n", ft_iterative_power(1, -10));
	printf("0 : %d\n", ft_iterative_power(1, -1));
	printf("1 : %d\n", ft_iterative_power(10, 0));
	printf("10 : %d\n", ft_iterative_power(10, 1));
	printf("100 : %d\n", ft_iterative_power(10 ,2));
	printf("216 : %d\n", ft_iterative_power(6, 3));	
}*/
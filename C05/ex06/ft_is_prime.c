/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:53:41 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/29 19:05:13 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while 	(nb / i >= i)
	{
			if (nb % i == 0)
				return (0);
			i++;
	} 
	return (1);
}
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(97));
}
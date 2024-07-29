/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:06:26 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/29 19:39:39 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int stock;
	int	*tabint;

	stock = min;
	i = 0;
	tabint = malloc(sizeof(int) * (max));
	while (i < max)
	{
		tabint[i] = stock;
		i++;
		stock++;
	}
	tabint[i] = '\0';
	return (tabint);
}
#include <stdio.h>

int	main(void)
{
	int *range;

	range = ft_range(0, 5);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n",
	range[0], range[1], range[2], range[3], range[4]);
	
	range = ft_range(3, 3);
	
	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d\n", range[0], range[1]);

	range = ft_range(0, 10);
	printf("0, 1, 2, 3, 4, 5, 6, 7, 8, 9 : %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n",
	range[0], range[1], range[2], range[3], range[4],
	range[5], range[6], range[7], range[8], range[9]);
}
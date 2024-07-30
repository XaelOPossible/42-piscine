/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:06:26 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/30 19:23:00 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int	*tabint;
	
	i = 0;
	if (min >= max)
		return (NULL);
	tabint = malloc(sizeof(int) * (max - min));
	if (!tabint)
		return(NULL);
	while (min + i < max)
	{
		tabint[i] = min + i;
		i++;
	}
	return (tabint);
}
/*#include <stdio.h>
#include <unistd.h>

int	main()
{
	int a = 0;
	int *range;

//	range = ft_range(0, 5);
//	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n",
//	range[0], range[1], range[2], range[3], range[4]);
	
//	range = ft_range(3, 3);
	
//	range = ft_range(-1, 1);
//	printf("-1, 0 : %d, %d, %d\n", range[0], range[1], range[2]);
	range = ft_range(0, 10);
	while (a <= 9)
	{
		printf("%d ", range[a]);
		a++;
	}
}*/

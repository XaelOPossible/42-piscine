/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:23:15 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/31 15:07:50 by axemicha         ###   ########.fr       */
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

int	ft_ultimate_range(int **range,int min, int max)
{
	int size;

	if (min >= max)
	{
		*range = NULL;
		return(0);
	}
	*range = ft_range(min, max);
	if (!range)
		return (-1);
	size = max - min;
	return (size);
}
#include <stdio.h>

int main()
{
	int *range;
	int size;
	int i;

	i = 0;
	size = ft_ultimate_range(&range, -10 , 10);
	printf("Size: %d\n", size);
	if (range)
	{
		while (i < size)
		{
			printf("%d ", range[i]);
			i++;
		}
		printf("\n");
	}
	return (0);
}
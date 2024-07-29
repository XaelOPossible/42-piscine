/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 23:31:57 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/29 15:51:15 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (0);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}
/*
#include <stdio.h>

int	main()
{
	printf("0:%d\n" , ft_fibonacci(0));
	printf("1:%d\n" , ft_fibonacci(1));
	printf("1:%d\n" , ft_fibonacci(2));
	printf("2:%d\n" , ft_fibonacci(3));
	printf("55:%d\n" , ft_fibonacci(10));
}*/
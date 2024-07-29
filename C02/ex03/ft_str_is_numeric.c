/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:19:06 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/22 16:50:37 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include<stdio.h>

int	main()
{
	char	test1[] = "gdfjdjdh122ffffgfgg";
	char	test2[] = "";
	char	test3[] = "1113313";
	char	test4[] = ";[;.@#$#";

    printf("Test 1: %s -> %d\n", test1, ft_str_is_numeric(test1));
    printf("Test 2: %s -> %d\n", test2, ft_str_is_numeric(test2));
    printf("Test 3: %s -> %d\n", test3, ft_str_is_numeric(test3));
    printf("Test 4: %s -> %d\n", test4, ft_str_is_numeric(test4));

    return 0;
}


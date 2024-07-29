/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:34:39 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/22 16:38:48 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include<stdio.h>

int	main()
{
	char	test1[] = "AAAAAFAFFFJFHJHFJHGFHJGFHJGJHFHFGHF";
	char	test2[] = "asfajhfajhfjhafGGFHJSHHADHJaadadad";
	char	test3[] = "";
	char	test4[] = "adsjfhasjfsjhfbsdjhfgjhsg";

	printf("Test 1 : %s -> %d\n", test1, ft_str_is_uppercase(test1));
	printf("Test 2 : %s -> %d\n", test2, ft_str_is_uppercase(test2));
	printf("Test 3 : %s -> %d\n", test3, ft_str_is_uppercase(test3));
	printf("Test 4 : %s -> %d\n", test4, ft_str_is_uppercase(test4));
}
*/

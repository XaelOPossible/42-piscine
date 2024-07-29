/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:27:33 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/22 16:58:50 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char	*str)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	char    test1[] = "gdfjdjdFSGHGFGSHGFHffffgfgg";
	char    test2[] = "";
	char    test3[] = "1113313";
	char    test4[] = ";[;.@#$#";
    
	printf("Test 1: %s -> %d\n", test1, ft_str_is_alpha(test1));
	printf("Test 2: %s -> %d\n", test2, ft_str_is_alpha(test2));
	printf("Test 3: %s -> %d\n", test3, ft_str_is_alpha(test3));
	printf("Test 4: %s -> %d\n", test4, ft_str_is_alpha(test4));
 	return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:22:21 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/21 17:33:32 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str [i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include<stdio.h>
 
int main()
{
	char    test1[] = "DDHJDBDVJHVGHVDVJVDJHD";
	char    test2[] = "";
	char    test3[] = "sdhjsgsdbgsjgsjgbsghgbdgbdfjgbdfjhgdfkjgkbdfhjb";
	char    test4[] = "gdfghdghdfgdfhghgjgjhdjhg[];";

	printf("Test 1: %s -> %d\n", test1, ft_str_is_lowercase(test1));
	printf("Test 2: %s -> %d\n", test2, ft_str_is_lowercase(test2));
	printf("Test 3: %s -> %d\n", test3, ft_str_is_lowercase(test3));
	printf("Test 4: %s -> %d\n", test4, ft_str_is_lowercase(test4));
	
	return 0;
}
*/

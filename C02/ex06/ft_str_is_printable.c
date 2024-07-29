/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:53:50 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/21 18:14:24 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char    test1[] = "AAAAAFAFFFJFH";
	char    test2[] = "ghirghdighdhdhgdgui gjdfghdghg";
	char    test3[] = "";
	char    test4[] = "53673535\n\t";

	printf("Test 1 : %s -> %d\n", test1, ft_str_is_printable(test1));
	printf("Test 2 : %s -> %d\n", test2, ft_str_is_printable(test2));
	printf("Test 3 : %s -> %d\n", test3, ft_str_is_printable(test3));
	printf("Test 4 : %s -> %d\n", test4, ft_str_is_printable(test4));
}
*/

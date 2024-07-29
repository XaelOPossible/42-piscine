/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:16:35 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/22 16:40:22 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int main()
{
	char    test1[] = "dhgjfkhjfhfh";
	char    test2[] = "bonjour";
	char    test3[] = "";
	char    test4[] = "hellloPOLe";

	printf("Test 1 : %s\n", ft_strupcase(test1));
	printf("Test 2 : %s\n", ft_strupcase(test2));
	printf("Test 3 : %s\n", ft_strupcase(test3));
	printf("Test 4 : %s\n", ft_strupcase(test4));
}
*/

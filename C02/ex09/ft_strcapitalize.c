/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:32:45 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/21 20:06:18 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < '0' || str[i - 1] > '9')
			&& (str[i - 1] < 'a' || str[i - 1] > 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main()
{
	char	a[] = "salut, comment tu vas ? 42mots quarante-deux; ciquante+et+un";
	
	printf("%s\n", ft_strcapitalize(a));
	return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:58:03 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/25 16:20:22 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (count);
}

#include <stdio.h>

int main()
{
	char	a[] = "abcdf";
	char	dest[] = "12345";

	printf("%d\n%s\n", ft_strlcpy(dest, a, 3), dest);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 23:21:03 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/22 16:49:06 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	char src[] = "Hello , World";
	char dest[50];

	ft_strcpy(dest, src);

	ft_putstr("La chaine souce est : ");
	ft_putstr(src);
	ft_putstr("\n");
	ft_putstr("La chaine copier est : ");
	ft_putstr(dest);
	ft_putstr("\n");
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:03:10 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/22 16:49:39 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main()
{
	char	src[] = "Solide comme un rock";
	char	dest[50];
	unsigned	int	n = 20;

	ft_strncpy(dest, src, n);

	ft_putstr("La chaine source est : ");
	ft_putstr(src);
	ft_putstr("\n");
	ft_putstr("La chaine copier est : ");
	ft_putstr(dest);
	ft_putstr("\n");
	return (0);	
}


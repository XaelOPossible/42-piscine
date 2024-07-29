/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 23:15:36 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/18 23:36:01 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	inversion;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		inversion = tab[i];
		tab[i] = tab[j];
		tab[j] = inversion;
		i++;
		j--;
	}
}

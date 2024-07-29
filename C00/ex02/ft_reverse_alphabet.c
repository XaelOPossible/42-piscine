/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_alphabet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axemicha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:48:41 by axemicha          #+#    #+#             */
/*   Updated: 2024/07/17 10:05:33 by axemicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char a = 98;
	// 97 <=> 'z'
	write(1, a, 1); 
	
}

int	main()
{
	ft_print_reverse_alphabet();
	return(0);
}

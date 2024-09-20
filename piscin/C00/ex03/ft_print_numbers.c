/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your_name> <your_email>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 08:40:22 by <your_name>       #+#    #+#             */
/*   Updated: 2024/08/29 08:40:22 by <your_name>      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	chiffre;
	int	a;

	chiffre = 0;
	while (chiffre <= 9)
	{
		a = chiffre + '0';
		write(1, &a, 1);
		chiffre++;
	}
}

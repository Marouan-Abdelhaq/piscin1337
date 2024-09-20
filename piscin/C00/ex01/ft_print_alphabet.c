/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your_name> <your_email>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:14:47 by <your_name>       #+#    #+#             */
/*   Updated: 2024/08/29 09:14:47 by <your_name>      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	lettre;

	lettre = 97;
	while (lettre <= 122)
	{
		write(1, &lettre, 1);
		lettre++;
	}
}

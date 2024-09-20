/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:16:53 by mabdelha          #+#    #+#             */
/*   Updated: 2024/09/03 02:05:33 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a / 10 + 48);
			ft_print(a % 10 + 48);
			ft_print(' ');
			ft_print(b / 10 + 48);
			ft_print(b % 10 + 48);
			b++;
			if ((a < 98))
			{
				write (1, ", ", 1);
				write (1, " ", 1);
			}
		}
		a++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:09:36 by mabdelha          #+#    #+#             */
/*   Updated: 2024/09/11 15:49:53 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	d;

	i = 1;
	d = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			d++;
		}
		i++;
	}
	if (d == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

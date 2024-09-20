/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:37:30 by mabdelha          #+#    #+#             */
/*   Updated: 2024/09/12 00:01:27 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checking(char *base)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 127)
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;

	len = ft_strlen(base);
	if (!ft_checking(base))
		return ;
	if (nbr < 0)
	{
		write (1, "-", 1);
		if (nbr == -2147483648)
		{
			ft_putnbr_base(-(nbr / len), base);
			write (1, &base[-(nbr % len)], 1);
			return ;
		}
		nbr = -nbr;
	}
	if (nbr >= len)
	{
		ft_putnbr_base(nbr / len, base);
	}
	write (1, &base[nbr % len], 1);
	write (1, "\n", 1);
}

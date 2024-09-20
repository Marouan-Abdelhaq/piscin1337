/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:31:27 by mabdelha          #+#    #+#             */
/*   Updated: 2024/09/06 21:29:03 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	j;
	char			*x;

	x = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		j = (unsigned char)str[i];
		if (j < 32 || j >= 127)
		{
			write(1, "\\", 1);
			write(1, &x[j / 16], 1);
			write(1, &x[j % 16], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

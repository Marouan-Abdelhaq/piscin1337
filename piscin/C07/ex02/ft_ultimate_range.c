/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:41:17 by mabdelha          #+#    #+#             */
/*   Updated: 2024/09/18 21:12:33 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_size(int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		return (-1);
	}
	while (min < max)
	{
		i++;
		min++;
	}
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	l;
	int	i;
	int	*tab;

	i = 0;
	l = ft_size(min, max);
	if (l < 0)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(l * sizeof(int));
	if (!tab)
	{
		return (-1);
	}
	while (i < l)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (l);
}

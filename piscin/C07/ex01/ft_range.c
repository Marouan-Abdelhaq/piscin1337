/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 05:24:41 by mabdelha          #+#    #+#             */
/*   Updated: 2024/09/18 21:03:49 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_size(int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (-1);
	while (min < max)
	{
		i++;
		min++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	l;
	int	*tab;

	i = 0;
	l = ft_size(min, max);
	if (l < 0)
		return (0);
	tab = malloc(l * sizeof(int));
	if (!tab)
		return (0);
	if (tab == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

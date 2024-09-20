/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 00:58:58 by mabdelha          #+#    #+#             */
/*   Updated: 2024/09/03 17:08:41 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	l;
	int	f;
	int	t;

	f = 0;
	l = size - 1;
	while (f < l)
	{
		t = tab[f];
		tab[f] = tab[l];
		tab[l] = t;
		f++;
		l--;
	}
}

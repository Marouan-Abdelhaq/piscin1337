/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 01:15:07 by mabdelha          #+#    #+#             */
/*   Updated: 2024/09/10 01:32:43 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;
	int	f1;
	int	f2;
	int	r;

	i = 2;
	f1 = 0;
	f2 = 1;
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	while (i <= index)
	{
		r = f1 + f2;
		f1 = f2;
		f2 = r;
		i++;
	}
	return (r);
}

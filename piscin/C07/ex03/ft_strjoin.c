/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 22:15:10 by mabdelha          #+#    #+#             */
/*   Updated: 2024/09/18 21:22:48 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_size(int size, char **strs, char *sep)
{
	int		size_sep;
	int		size_total;
	int		i;

	i = 0;
	size_total = 0;
	size_sep = ft_strlen(sep);
	while (i < size)
	{
		size_total += ft_strlen(strs[i]);
		i++;
	}
	size_total += size_sep * (size - 1);
	return (size_total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		size_total;
	char	*result;

	i = 0;
	size_total = ft_size(size, strs, sep);
	result = (char *)malloc((size_total + 1) * sizeof(char));
	if (!result)
	{
		return (NULL);
	}
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(result, sep);
		}
		i++;
	}
	result[size_total] = '\0';
	return (result);
}

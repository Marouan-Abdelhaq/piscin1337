/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 01:02:41 by mabdelha          #+#    #+#             */
/*   Updated: 2024/09/20 01:06:46 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		while (check_sep(str[i], charset))
			i++;
		if (str[i])
			c++;
		while (!check_sep(str[i], charset) && str[i])
			i++;
	}
	return (c);
}

char	*ft_strdup(char *str, char *charset)
{
	int		len;
	int		i;
	char	*s;

	len = 0;
	i = 0;
	while (!check_sep(str[len], charset) && str[len])
		len++;
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char *str, char *charset)
{
	char	**p;
	int		countw;
	int		i;
	int		j;

	countw = ft_count_word(str, charset);
	i = 0;
	j = 0;
	p = (char **)malloc(8 * countw + 8);
	if (p == NULL)
		return (NULL);
	while (str[j])
	{
		while (check_sep(str[j], charset))
			j++;
		if (str[j])
			p[i++] = ft_strdup(str + j, charset);
		while (!check_sep(str[j], charset) && str[j])
			j++;
	}
	p[i] = 0;
	return (p);
}

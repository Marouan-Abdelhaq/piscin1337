/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 01:14:23 by mabdelha          #+#    #+#             */
/*   Updated: 2024/09/10 20:42:34 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*first;
	char	*find;

	if (!*to_find)
	{
		return (str);
	}
	while (*str)
	{
		first = str;
		find = to_find;
		while (*first && *find && *first == *find)
		{
			first++;
			find++;
		}
		if (*find == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}

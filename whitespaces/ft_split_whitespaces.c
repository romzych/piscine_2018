/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 09:44:14 by rblondel          #+#    #+#             */
/*   Updated: 2018/07/24 13:48:21 by rblondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int size;

	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == 32)
			i++;
		else if (str[i + 1] == '\n' || str[i + 1] == '\t' || str[i + 1] == 32 ||
				str[i + 1] == '\0')
		{
			i++;
			size++;
		}
		else
			i++;
	}
	return (size);
}

int		ft_ctltrs(char *str)
{
	int i;
	int size;

	size = 0;
	i = 0;
	while (str[i] != '\n' && str[i] != '\t' && str[i] != 32 && str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == 32)
			i++;
		else
		{
			size++;
			i++;
		}
	}
	return (size);
}

char	**ft_split_whitespaces(char *str)
{
	char **tab;
	int i;
	int y;
	int x;

	y = 0;
	i = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_count_words(str) + 1))))
		return (0);
	while (y < ft_count_words(str))
	{
		x = 0;
		while (str[i] == '\n' || str[i] == '\t' || str[i] == 32)
			i++;
		if (!(tab[y] = (char*)malloc(sizeof(char) * (ft_ctltrs(str + i) + 1))))
			return (0);
		while (str[i] != '\n' && str[i] != '\t' && str[i] != 32)
		{
			tab[y][x] = str[i];
			x++;
			i++;
		}
		tab[y][x] = '\0';
		y++;
	}
	y++;
	x = 0;
	tab[y][x] = 0;
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 13:00:02 by rblondel          #+#    #+#             */
/*   Updated: 2018/07/24 17:23:13 by rblondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	*ft_copy(int argc, char **argv, char *tab)
{
	int y;
	int i;
	int z;

	y = 1;
	i = 0;
	z = 0;
	while (y <= argc - 1)
	{
		while (argv[y][i] != '\0')
		{
			tab[z] = argv[y][i];
			i++;
			z++;
		}
		tab[z] = '\n';
		z++;
		i = 0;
		y++;
	}
	tab[z] = '\0';
	return (tab);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		y;
	int		z;
	int		size;
	char	*tab;

	size = 0;
	i = 0;
	y = 1;
	z = 0;
	while (y <= argc - 1)
	{
		while (argv[y][i] != '\0')
			i++;
		size += i + 1;
		i = 0;
		y++;
	}
	if (!(tab = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	return (ft_copy(argc, argv, tab));
}

int main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}

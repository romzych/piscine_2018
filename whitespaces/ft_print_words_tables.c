/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:03:58 by rblondel          #+#    #+#             */
/*   Updated: 2018/07/24 13:15:27 by rblondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char **ft_split_whitespaces(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (tab[i][y] != 0)
	{
		y = 0;
		while (tab[i][y] != '\0')
		{
			ft_putchar(tab[i][y]);
			y++;
		}
		i++;
	}
}

int main()
{
	char str[] = " bonjour comment ca va";
	ft_print_words_tables(ft_split_whitespaces(str));
	return (0);
}

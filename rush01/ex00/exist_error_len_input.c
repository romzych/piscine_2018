/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exist_error_len_input.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:16:29 by bloic             #+#    #+#             */
/*   Updated: 2018/07/15 20:23:59 by bloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		exist_error_len_input(char **argv)
{
	int i;
	int j;
	int k;
	int tab[9];

	i = 0;
	k = 0;
	while (i < 9)
	{
		tab[i] = 0;
		j = 0;
		while (argv[i + 1][j] != '\0')
		{
			tab[i]++;
			j++;
		}
		i++;
	}
	while (k < 9)
	{
		if (tab[k] != 9)
			return (1);
		k++;
	}
	return (0);
}

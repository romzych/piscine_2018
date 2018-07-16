/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 05:05:05 by bloic             #+#    #+#             */
/*   Updated: 2018/07/15 17:29:51 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_grid(int **grid)
{
	int		i;
	int		j;
	char	c;
	char	sp;
	char	sudoku;

	i = 0;
	j = 0;
	c = '\n';
	sp = ' ';
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			sudoku = grid[i][j] + 48;
			write(1, &sudoku, 1);
			if (j != 8)
				write(1, &sp, 1);
			j++;
		}
		write(1, &c, 1);
		i++;
	}
}

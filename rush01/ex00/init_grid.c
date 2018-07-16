/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:08:13 by bloic             #+#    #+#             */
/*   Updated: 2018/07/15 20:10:20 by bloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_grid(int **grid, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			grid[i][j] = argv[i + 1][j] - 48;
			j++;
		}
		i++;
	}
}

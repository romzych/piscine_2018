/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_num_safe_hor_and_ver.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 18:41:19 by bloic             #+#    #+#             */
/*   Updated: 2018/07/15 20:05:46 by bloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num_safe_hor_and_ver(int **grid, int num, int i, int j)
{
	int col;
	int line;

	col = 0;
	line = 0;
	while (col < 9)
	{
		if (grid[i][col] == num)
			return (0);
		col++;
	}
	while (line < 9)
	{
		if (grid[line][j] == num)
			return (0);
		line++;
	}
	return (1);
}

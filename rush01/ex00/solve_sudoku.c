/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:15:57 by bloic             #+#    #+#             */
/*   Updated: 2018/07/15 20:24:22 by bloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num_safe(int **grid, int num, int i, int j);
int		exist_unassigned_cell(int **grid, int *i, int *j);

int		solve_sudoku(int **grid)
{
	int i;
	int j;
	int num;

	num = 1;
	if (!exist_unassigned_cell(grid, &i, &j))
		return (1);
	while (num <= 9)
	{
		if (is_num_safe(grid, num, i, j))
		{
			grid[i][j] = num;
			if (solve_sudoku(grid))
				return (1);
			grid[i][j] = -2;
		}
		num++;
	}
	return (0);
}

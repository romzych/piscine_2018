/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exist_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:16:53 by bloic             #+#    #+#             */
/*   Updated: 2018/07/15 20:26:08 by bloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		solve_sudoku(int **grid);
int		exist_error_len_input(char **argv);

int		exist_error(int **grid, int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc != 10)
		return (1);
	if (!solve_sudoku(grid))
		return (1);
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (grid[i][j] != '.' && ((grid[i][j] < '1' - 48) ||
						(grid[i][j] > '9' - 48)))
				return (1);
			j++;
		}
		i++;
	}
	if (exist_error_len_input(argv))
		return (1);
	return (0);
}

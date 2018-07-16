/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 13:45:45 by thile             #+#    #+#             */
/*   Updated: 2018/07/15 20:24:54 by bloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	print_grid(int **grid);
int		exist_unassigned_cell(int **grid, int *i, int *j);
int		is_num_safe_hor_and_ver(int **grid, int num, int i, int j);
int		is_num_safe_in_block(int **grid, int num, int i, int j);
int		is_num_safe(int **grid, int num, int i, int j);
void	init_grid(int **grid, char **argv);
int		solve_sudoku(int **grid);
void	allocate_memory(int ***grid);
int		exist_error_len_input(char **argv);
int		exist_error(int **grid, int argc, char **argv);

int		main(int argc, char **argv)
{
	int i;
	int **grid;

	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	allocate_memory(&grid);
	init_grid(grid, argv);
	if (exist_error(grid, argc, argv))
		write(1, "Error\n", 6);
	else
		print_grid(grid);
	i = 0;
	while (i < 9)
	{
		free((grid)[i]);
		i++;
	}
	free(grid);
	return (0);
}

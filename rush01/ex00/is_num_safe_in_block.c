/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_num_safe_in_block.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 18:43:15 by bloic             #+#    #+#             */
/*   Updated: 2018/07/15 20:05:51 by bloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num_safe_in_block(int **grid, int num, int i, int j)
{
	int count_line;
	int count_col;

	i = i / 3 * 3;
	j = j / 3 * 3;
	count_line = i;
	count_col = j;
	while (count_line < i + 3)
	{
		count_col = j;
		while (count_col < j + 3)
		{
			if (grid[count_line][count_col] == num)
				return (0);
			count_col++;
		}
		count_line++;
	}
	return (1);
}

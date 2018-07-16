/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_num_safe.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 18:43:43 by bloic             #+#    #+#             */
/*   Updated: 2018/07/15 20:05:30 by bloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num_safe_hor_and_ver(int **grid, int num, int i, int j);
int		is_num_safe_in_block(int **grid, int num, int i, int j);

int		is_num_safe(int **grid, int num, int i, int j)
{
	if (is_num_safe_hor_and_ver(grid, num, i, j)
	&& is_num_safe_in_block(grid, num, i, j))
		return (1);
	return (0);
}

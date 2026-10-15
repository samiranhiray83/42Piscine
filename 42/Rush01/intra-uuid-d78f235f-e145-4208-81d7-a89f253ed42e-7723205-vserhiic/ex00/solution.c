/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserhiic <vserhiic@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 09:18:19 by tlange            #+#    #+#             */
/*   Updated: 2026/10/04 14:05:39 by vserhiic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible(int line[4]);

int	check_top(int grid[4][4], int col, int observable_wanted)
{
	int	all[4];
	int	row;

	row = 0;
	while (row < 4)
	{
		all[row] = grid[row][col];
		row++;
	}
	return (count_visible(all) == observable_wanted);
}

int	check_bottom(int grid[4][4], int col, int observable_wanted)
{
	int	all[4];
	int	row;

	row = 0;
	while (row < 4)
	{
		all[row] = grid[3 - row][col];
		row++;
	}
	return (count_visible(all) == observable_wanted);
}

int	check_left(int grid[4][4], int row, int observable_wanted)
{
	int	all[4];
	int	col;

	col = 0;
	while (col < 4)
	{
		all[col] = grid[row][col];
		col++;
	}
	return (count_visible(all) == observable_wanted);
}

int	check_right(int grid[4][4], int row, int observable_wanted)
{
	int	all[4];
	int	col;

	col = 0;
	while (col < 4)
	{
		all[col] = grid[row][3 - col];
		col++;
	}
	return (count_visible(all) == observable_wanted);
}

int	is_solution(int grid[4][4], int viewpoint_list[16], int pos)
{
	int	idx;
	int	solved;
	int	unsolved;
	int	missing_positions;

	idx = 0;
	solved = 1;
	unsolved = 0;
	missing_positions = -1;
	if (pos != 16)
		return (missing_positions);
	while (idx < 4)
	{
		if (!check_top(grid, idx, viewpoint_list[idx]))
			return (unsolved);
		if (!check_bottom(grid, idx, viewpoint_list[4 + idx]))
			return (unsolved);
		if (!check_left(grid, idx, viewpoint_list[8 + idx]))
			return (unsolved);
		if (!check_right(grid, idx, viewpoint_list[12 + idx]))
			return (unsolved);
		idx++;
	}
	return (solved);
}

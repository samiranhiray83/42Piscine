/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builder.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserhiic <vserhiic@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 09:18:19 by tlange            #+#    #+#             */
/*   Updated: 2026/10/04 14:05:31 by vserhiic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_solution(int grid[4][4], int viewpoint_list[16], int pos);
int	terms_for_stack(int grid[4][4], int viewpoint_list[16], int pos);

int	should_stack(int grid[4][4], int pos, int val)
{
	int	row;
	int	col;
	int	idx;

	row = pos / 4;
	col = pos % 4;
	idx = 0;
	while (idx < 4)
	{
		if (grid[row][idx] == val || grid[idx][col] == val)
			return (0);
		idx++;
	}
	return (1);
}

int	increase_stack(int grid[4][4], int viewpoint_list[16], int pos)
{
	int	status;

	status = is_solution(grid, viewpoint_list, pos);
	if (status == 0)
		return (0);
	if (status == 1)
		return (1);
	return (terms_for_stack(grid, viewpoint_list, pos));
}

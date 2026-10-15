/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terms_for_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserhiic <vserhiic@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 12:37:08 by vserhiic          #+#    #+#             */
/*   Updated: 2026/10/04 14:05:43 by vserhiic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_solution(int grid[4][4], int viewpoint_list[16], int pos);
int	should_stack(int grid[4][4], int pos, int val);
int	increase_stack(int grid[4][4], int viewpoint_list[16], int pos);

int	terms_for_stack(int grid[4][4], int viewpoint_list[16], int pos)
{
	int	row;
	int	col;
	int	val;

	row = pos / 4;
	col = pos % 4;
	val = 1;
	while (val <= 4)
	{
		if (should_stack(grid, pos, val))
		{
			grid[row][col] = val;
			if (increase_stack(grid, viewpoint_list, pos + 1) == 1)
				return (1);
			else
				grid[row][col] = 0;
		}
		val++;
	}
	return (0);
}

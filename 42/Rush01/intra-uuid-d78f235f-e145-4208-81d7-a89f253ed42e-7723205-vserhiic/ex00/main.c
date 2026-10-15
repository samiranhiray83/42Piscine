/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserhiic <vserhiic@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 09:14:38 by tlange            #+#    #+#             */
/*   Updated: 2026/10/04 14:05:35 by vserhiic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		increase_stack(int grid[4][4], int viewpoint_list[16], int pos);
int		print_error(void);
void	print_grid(int grid[4][4]);

void	init_grid(int grid[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
}

int	main(int argc, char *argv[])
{
	int	pos;
	int	grid[4][4];
	int	viewpoint_list[16];
	int	stack_finished;

	if (argc != 2 || !parse_input(argv[1], viewpoint_list))
	{
		return (print_error());
	}
	pos = 0;
	stack_finished = 1;
	init_grid(grid);
	if (increase_stack(grid, viewpoint_list, pos) == stack_finished)
		print_grid(grid);
	else
		return (print_error ());
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserhiic <vserhiic@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 09:18:19 by tlange            #+#    #+#             */
/*   Updated: 2026/10/04 14:05:33 by vserhiic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible(int line[4])
{
	int	max;
	int	idx;
	int	observable_count;

	max = 0;
	idx = 0;
	observable_count = 0;
	while (idx < 4)
	{
		if (line[idx] > max)
		{
			max = line[idx];
			observable_count++;
		}
		idx++;
	}
	return (observable_count);
}

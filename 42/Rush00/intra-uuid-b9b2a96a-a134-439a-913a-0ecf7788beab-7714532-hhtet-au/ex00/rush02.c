/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:05:04 by shiray            #+#    #+#             */
/*   Updated: 2026/09/27 17:49:21 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if (row == 1 && (column == 1 || column == x))
				ft_putchar('A');
			else if (row == y && (column == x || column == 1))
				ft_putchar('C');
			else if ((row == 1 || row == y) && (column > 1 || column < x))
				ft_putchar('B');
			else if ((row > 1 || row < y) && (column == 1 || column == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		row++;
		ft_putchar('\n');
	}
}

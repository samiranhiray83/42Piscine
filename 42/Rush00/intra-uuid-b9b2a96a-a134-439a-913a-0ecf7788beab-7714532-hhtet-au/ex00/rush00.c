/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:05:04 by shiray            #+#    #+#             */
/*   Updated: 2026/09/27 20:58:20 by shiray           ###   ########.fr       */
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
			if ((row == 1 || row == y)  && (column == 1 || column == x))
				ft_putchar('o');
			else if ((row == 1 || row == y) && (column > 1 || column < x))
				ft_putchar('-');
			else if ((row > 1 || row < y) && (column == 1 || column == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			column++;
		}
		row++;
		ft_putchar('\n');
	}
}

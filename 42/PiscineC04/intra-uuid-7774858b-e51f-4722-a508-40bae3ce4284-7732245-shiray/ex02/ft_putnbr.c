/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:18:57 by shiray            #+#    #+#             */
/*   Updated: 2026/10/08 12:19:26 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb <= -10)
			ft_putnbr(-(nb / 10));
		ft_putchar('0' - (nb % 10));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
}
/*
int	main(void)
{
	ft_putnbr(123456);
	ft_putchar('\n');

	ft_putnbr(-41);
	ft_putchar('\n');

	ft_putnbr(0);
	ft_putchar('\n');

	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:24:20 by shiray            #+#    #+#             */
/*   Updated: 2026/10/15 12:35:58 by shiray           ###   ########.fr       */
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
		if (nb > 10)
			ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
}

int	main(void)
{
	ft_putnbr(12345);
	ft_putchar('\n');
	ft_putnbr(-12345);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	return (0);
}

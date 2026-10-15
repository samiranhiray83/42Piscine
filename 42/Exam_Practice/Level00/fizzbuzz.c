/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:31:21 by shiray            #+#    #+#             */
/*   Updated: 2026/10/15 15:43:11 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	nb = 1;
	while (nb <= 100)
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10);	
	}
}

int	main(void)
{
	int 	nb;

	nb = 1;
	ft_putnbr(nb);
	return (0);
}

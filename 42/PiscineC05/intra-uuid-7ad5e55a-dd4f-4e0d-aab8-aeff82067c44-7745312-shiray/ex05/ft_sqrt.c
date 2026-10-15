/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:48:26 by shiray            #+#    #+#             */
/*   Updated: 2026/10/14 21:03:46 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb / i)
	{
		if (nb / i == i && nb % i == 0)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(-3));
	printf("%d\n", ft_sqrt(100));
	printf("%d\n", ft_sqrt(49));
}*/

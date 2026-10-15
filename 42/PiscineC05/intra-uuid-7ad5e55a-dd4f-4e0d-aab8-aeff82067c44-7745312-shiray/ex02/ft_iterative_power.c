/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:18:58 by shiray            #+#    #+#             */
/*   Updated: 2026/10/12 15:46:05 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(3, 3));
	printf("%d\n", ft_iterative_power(3, -1));
	printf("%d\n", ft_iterative_power(1, 0));
	printf("%d\n", ft_iterative_power(-2, 3));
	printf("%d\n", ft_iterative_power(0, 0));
	return (0);
}*/

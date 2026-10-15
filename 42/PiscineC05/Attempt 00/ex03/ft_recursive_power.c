/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:45:32 by shiray            #+#    #+#             */
/*   Updated: 2026/10/12 15:56:56 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(3, 3));
	printf("%d\n", ft_recursive_power(3, -1));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(3, 0));
	printf("%d\n", ft_recursive_power(0, 3));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:27:45 by shiray            #+#    #+#             */
/*   Updated: 2026/09/26 19:05:03 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("Before:a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("After:a = %d, b = %d\n", a, b);
}

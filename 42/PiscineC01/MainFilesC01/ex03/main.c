/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 15:20:55 by shiray            #+#    #+#             */
/*   Updated: 2026/09/26 16:17:17 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	r;
	int	m;

	a = 10;
	b = 3;
	ft_div_mod(a, b, &r, &m);
	printf("Remainder is:%d\n", r);
	printf("Quotient is:%d\n", m);
}

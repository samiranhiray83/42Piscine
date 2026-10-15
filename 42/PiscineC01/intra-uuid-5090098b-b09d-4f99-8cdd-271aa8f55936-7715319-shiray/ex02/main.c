/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 15:01:00 by shiray            #+#    #+#             */
/*   Updated: 2026/09/28 13:38:04 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*p1;
	int	*p2;

	a = 20;
	p1 = &a;

	b = 10;
	p2 = &b;

	printf("Before value a:%d\n", a);
	printf("Before value b:%d\n", b);
	ft_swap(p1, p2);
	printf("After value a:%d\n", a);
	printf("After value b:%d\n", b);

	return (0);
}

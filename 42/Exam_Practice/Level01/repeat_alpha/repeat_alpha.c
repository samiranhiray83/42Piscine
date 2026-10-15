/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:18:07 by shiray            #+#    #+#             */
/*   Updated: 2026/10/15 19:06:08 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	temp;

	i = 0;
	if (ac <=1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		if (av[1][i] >= 65 && av[1][i] <= 90)
		{
			temp = av[1][i] - 64;
			while(temp > 0)
			{
				write(1, &av[1][i], 1);
				temp--;
			}
			i++;
		}
		else if (av[1][i] >= 97 && av[1][i] <= 122)
		{	
			temp = av[1][i] - 96;
	                while(temp > 0)
                        {
                                write(1, &av[1][i], 1);
                                temp--;
                        }
                        i++;
		}
		else
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	return (0);
}

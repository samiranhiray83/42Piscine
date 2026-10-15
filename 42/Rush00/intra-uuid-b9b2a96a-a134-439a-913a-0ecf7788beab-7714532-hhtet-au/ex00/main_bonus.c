/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:57:49 by shiray            #+#    #+#             */
/*   Updated: 2026/09/27 20:49:16 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);
void	rush(int x, int y);
int	atoi(char *str);

void	ft_putstr(char *str)
{
	int i;

	i=0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char** av)
{
	int	i;

	if (ac != 3) 
	{
		ft_putstr("More inputs than expected\n");
		return (0);
	}

	i = 0;
	while (av[1][i])
	{
		if (av[1][i] <= '0' || av[1][i] > '9')
		{
			ft_putstr("Only numbers more than 0 allowed\n");
			return (0);
		}
		i++;
	}

	i = 0;
	while (av[2][i])
	{
		if (av[2][i] <= '0' || av[2][i] > '9')
		{
			ft_putstr("Only numbers more than 0 allowed\n");
			return (0);
		}
		i++;
	}
	
	rush(atoi(av[1]), atoi(av[2]));
	return (0);
}

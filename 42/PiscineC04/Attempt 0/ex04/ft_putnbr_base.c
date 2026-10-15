/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:17:04 by shiray            #+#    #+#             */
/*   Updated: 2026/10/05 20:24:28 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_base_len(base);
	if (len < 2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_number(long nbr, char *base)
{
	int	len;

	len = ft_base_len(base);
	if (nbr >= len)
		ft_print_number(nbr / len, base);
	ft_putchar(base[nbr % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;

	if (!ft_check_base(base))
		return ;
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	ft_print_number(n, base);
}
/*
int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);

	ft_putnbr_base(42, "01");
	write(1, "\n", 1);

	ft_putnbr_base(42, "0123456789ABCDEF");
	write(1, "\n", 1);

	ft_putnbr_base(42, "poneyvif");
	write(1, "\n", 1);

	ft_putnbr_base(-42, "0123456789");
	write(1, "\n", 1);

	ft_putnbr_base(42, "01231");
	write(1, "\n", 1);

	return (0);
}
*/

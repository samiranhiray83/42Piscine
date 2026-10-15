/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschua <joschua@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 02:49:09 by joschua           #+#    #+#             */
/*   Updated: 2026/10/11 02:49:09 by joschua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

static int	ft_write_all(char *str, size_t length)
{
	ssize_t	count;

	while (length)
	{
		count = write(1, str, length);
		if (count <= 0)
			return (0);
		str += count;
		length -= count;
	}
	return (1);
}

int	ft_emit(t_output *out, char *key)
{
	char	*value;

	value = ft_find(out->dict, key);
	if (!value)
		return (0);
	if (out->print)
	{
		if (!out->first && !ft_write_all(" ", 1))
			return (0);
		if (!ft_write_all(value, ft_strlen(value)))
			return (0);
		out->first = 0;
	}
	return (1);
}

int	ft_small(t_output *out, unsigned int number)
{
	char	key[3];

	if (number < 10)
	{
		key[0] = '0' + number;
		key[1] = '\0';
	}
	else
	{
		key[0] = '0' + number / 10;
		key[1] = '0' + number % 10;
		key[2] = '\0';
	}
	return (ft_emit(out, key));
}

int	ft_group(t_output *out, unsigned int number)
{
	if (number >= 100)
	{
		if (!ft_small(out, number / 100) || !ft_emit(out, "100"))
			return (0);
		number %= 100;
	}
	if (number >= 20)
	{
		if (!ft_small(out, number / 10 * 10))
			return (0);
		number %= 10;
	}
	if (number && !ft_small(out, number))
		return (0);
	return (1);
}

int	ft_scale(t_output *out, size_t exponent)
{
	char	*key;
	size_t	i;
	int		ok;

	if (exponent == 0)
		return (1);
	key = malloc(exponent + 2);
	if (!key)
		return (0);
	key[0] = '1';
	i = 1;
	while (i <= exponent)
		key[i++] = '0';
	key[i] = '\0';
	ok = ft_emit(out, key);
	free(key);
	return (ok);
}

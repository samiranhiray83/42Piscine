/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschua <joschua@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 02:49:09 by joschua           #+#    #+#             */
/*   Updated: 2026/10/11 02:49:09 by joschua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

static unsigned int	ft_take_group(char *number, size_t width)
{
	unsigned int	value;
	size_t			i;

	value = 0;
	i = 0;
	while (i < width)
	{
		value = value * 10 + number[i] - '0';
		i++;
	}
	return (value);
}

int	ft_convert(t_output *out, char *number)
{
	size_t			length;
	size_t			width;
	unsigned int	value;

	if (ft_equal(number, "0"))
		return (ft_emit(out, "0"));
	length = ft_strlen(number);
	width = length % 3;
	if (width == 0)
		width = 3;
	while (length)
	{
		value = ft_take_group(number, width);
		number += width;
		length -= width;
		if (value && (!ft_group(out, value) || !ft_scale(out, length)))
			return (0);
		width = 3;
	}
	return (1);
}

static int	ft_error(char *message)
{
	write(1, message, ft_strlen(message));
	return (1);
}

static int	ft_run(char *path, char *number)
{
	char		*data;
	t_output	out;
	int			ok;

	data = ft_read_file(path);
	if (!data)
		return (ft_error("Dict Error\n"));
	out.dict = ft_parse_dict(data);
	out.print = 0;
	out.first = 1;
	ok = (out.dict != NULL);
	if (ok)
		ok = ft_convert(&out, number);
	out.print = 1;
	if (ok)
		ok = ft_convert(&out, number);
	free(out.dict);
	free(data);
	if (!ok)
		return (ft_error("Dict Error\n"));
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*path;
	char	*number;

	if (argc != 2 && argc != 3)
		return (ft_error("Error\n"));
	path = "numbers.dict";
	if (argc == 3)
		path = argv[1];
	number = argv[argc - 1];
	if (!ft_is_number(number))
		return (ft_error("Error\n"));
	return (ft_run(path, ft_normalize(number)));
}

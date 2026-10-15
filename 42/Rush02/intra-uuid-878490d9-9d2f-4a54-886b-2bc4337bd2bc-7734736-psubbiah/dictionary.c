/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschua <joschua@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 02:49:09 by joschua           #+#    #+#             */
/*   Updated: 2026/10/11 02:49:09 by joschua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*ft_find(t_entry *dict, char *key)
{
	int	i;

	i = 0;
	while (dict[i].key)
	{
		if (ft_equal(dict[i].key, key))
			return (dict[i].value);
		i++;
	}
	return (NULL);
}

static int	ft_add_line(char *line, t_entry *dict, int index)
{
	char	*colon;
	char	*key;
	char	*value;

	colon = line;
	while (*colon && *colon != ':')
		colon++;
	if (*colon != ':')
		return (0);
	*colon = '\0';
	key = ft_parse_key(line);
	value = ft_parse_value(colon + 1);
	if (!key || !value || ft_find(dict, key))
		return (0);
	dict[index].key = key;
	dict[index].value = value;
	dict[index + 1].key = NULL;
	return (1);
}

static char	*ft_next_line(char *line)
{
	while (*line && *line != '\n')
		line++;
	if (*line == '\n')
	{
		*line = '\0';
		line++;
	}
	return (line);
}

static int	ft_fill_dict(char *data, t_entry *dict)
{
	char	*line;
	int		index;

	index = 0;
	while (*data)
	{
		line = data;
		data = ft_next_line(data);
		if (!ft_blank(line))
		{
			if (!ft_add_line(line, dict, index))
				return (0);
			index++;
		}
	}
	return (index > 0);
}

t_entry	*ft_parse_dict(char *data)
{
	t_entry	*dict;

	dict = ft_new_dict(data);
	if (!dict)
		return (NULL);
	if (ft_fill_dict(data, dict))
		return (dict);
	free(dict);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschua <joschua@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 02:49:09 by joschua           #+#    #+#             */
/*   Updated: 2026/10/11 02:49:09 by joschua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*ft_parse_key(char *line)
{
	char	*end;

	while (*line == ' ' || *line == '\t')
		line++;
	if (*line == '+')
		line++;
	end = line + ft_strlen(line);
	while (end > line && (end[-1] == ' ' || end[-1] == '\t'))
		end--;
	*end = '\0';
	if (!ft_is_number(line))
		return (NULL);
	return (ft_normalize(line));
}

char	*ft_parse_value(char *line)
{
	char	*value;
	char	*end;

	while (*line == ' ' || *line == '\t')
		line++;
	value = line;
	end = line + ft_strlen(line);
	if (end > value && end[-1] == '\r')
		end--;
	while (end > value && (end[-1] == ' ' || end[-1] == '\t'))
		end--;
	*end = '\0';
	if (!*value)
		return (NULL);
	while (*line)
	{
		if ((unsigned char)*line < 32 || (unsigned char)*line > 126)
			return (NULL);
		line++;
	}
	return (value);
}

t_entry	*ft_new_dict(char *data)
{
	size_t	lines;
	size_t	i;
	t_entry	*dict;

	lines = 1;
	i = 0;
	while (data[i])
	{
		if (data[i] == '\n')
			lines++;
		i++;
	}
	if (lines >= (size_t)-1 / sizeof(t_entry))
		return (NULL);
	dict = malloc((lines + 1) * sizeof(t_entry));
	if (dict)
		dict[0].key = NULL;
	return (dict);
}

int	ft_blank(char *line)
{
	while (*line == ' ' || *line == '\t' || *line == '\r')
		line++;
	return (*line == '\0');
}

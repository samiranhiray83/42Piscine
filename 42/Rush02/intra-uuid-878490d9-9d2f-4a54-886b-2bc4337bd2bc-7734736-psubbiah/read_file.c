/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschua <joschua@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 02:49:09 by joschua           #+#    #+#             */
/*   Updated: 2026/10/11 11:46:11 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

static size_t	ft_file_size(char *path)
{
	int		fd;
	char	buffer[4096];
	ssize_t	count;
	size_t	length;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return ((size_t) - 1);
	length = 0;
	count = read(fd, buffer, sizeof(buffer));
	while (count > 0 && (size_t)count < (size_t) - 1 - length)
	{
		length += count;
		count = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	if (count != 0)
		return ((size_t) - 1);
	return (length);
}

static int	ft_fill_buffer(int fd, char *data, size_t length)
{
	size_t	used;
	ssize_t	count;
	char	extra;

	used = 0;
	while (used < length)
	{
		count = read(fd, data + used, length - used);
		if (count <= 0)
			return (0);
		used += count;
	}
	data[length] = '\0';
	return (read(fd, &extra, 1) == 0 && ft_strlen(data) == length);
}

char	*ft_read_file(char *path)
{
	int		fd;
	char	*data;
	size_t	length;

	length = ft_file_size(path);
	if (length == (size_t)-1)
		return (NULL);
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	data = malloc(length + 1);
	if (data && !ft_fill_buffer(fd, data, length))
	{
		free(data);
		data = NULL;
	}
	close(fd);
	return (data);
}

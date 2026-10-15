/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschua <joschua@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 02:49:09 by joschua           #+#    #+#             */
/*   Updated: 2026/10/11 02:49:09 by joschua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_entry
{
	char	*key;
	char	*value;
}	t_entry;

typedef struct s_output
{
	t_entry	*dict;
	int		print;
	int		first;
}	t_output;

size_t	ft_strlen(char *str);
int		ft_equal(char *a, char *b);
int		ft_is_number(char *str);
char	*ft_normalize(char *str);
char	*ft_read_file(char *path);
char	*ft_parse_key(char *line);
char	*ft_parse_value(char *line);
t_entry	*ft_new_dict(char *data);
int		ft_blank(char *line);
t_entry	*ft_parse_dict(char *data);
char	*ft_find(t_entry *dict, char *key);
int		ft_emit(t_output *out, char *key);
int		ft_small(t_output *out, unsigned int number);
int		ft_group(t_output *out, unsigned int number);
int		ft_scale(t_output *out, size_t exponent);
int		ft_convert(t_output *out, char *number);

#endif

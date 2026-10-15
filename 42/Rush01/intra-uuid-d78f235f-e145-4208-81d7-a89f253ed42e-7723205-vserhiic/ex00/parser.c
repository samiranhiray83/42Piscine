/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserhiic <vserhiic@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 10:43:00 by tlange            #+#    #+#             */
/*   Updated: 2026/10/04 14:05:36 by vserhiic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_error(void);

int	parse_input(char *str, int viewpoint_list[16])
{
	int	str_idx;
	int	idx;

	str_idx = 0;
	idx = 0;
	while (str[str_idx] != '\0')
	{
		if (str[str_idx] == ' ')
		{
			str_idx++;
			continue ;
		}
		if (str[str_idx] >= '1' && str[str_idx] <= '4')
		{
			if (idx >= 16)
				return (1);
			viewpoint_list[idx] = str[str_idx] - '0';
			idx++;
		}
		else
			return (1);
		str_idx++;
	}
	return (idx == 16);
}

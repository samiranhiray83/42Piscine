/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:29:40 by shiray            #+#    #+#             */
/*   Updated: 2026/09/29 17:34:30 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int     ft_str_is_uppercase(char *str)
{
	int     i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        char    str[] = "daucd";
        printf("%d\n", ft_str_is_uppercase(str));
        return (0);
}
*/


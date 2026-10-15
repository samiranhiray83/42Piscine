/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:07:31 by shiray            #+#    #+#             */
/*   Updated: 2026/09/29 18:48:54 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || (!(str[i - 1] >= 'a' && str[i - 1] <= 'z')
					&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					&& !(str[i - 1] >= '0' && str[i - 1] <= '9')))
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i > 0 && ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str [] = "HEllO, I am A pisCIner! aND also 42student!!";
	printf("Before: %s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
*/

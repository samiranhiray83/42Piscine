/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:08:19 by shiray            #+#    #+#             */
/*   Updated: 2026/10/15 18:15:58 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

int	main(void)
{
	char str[] = "Nigga Praha";
	printf("%s\n", str);
	printf("The string length is:%d\n", ft_strlen(str));
	return (0);
}


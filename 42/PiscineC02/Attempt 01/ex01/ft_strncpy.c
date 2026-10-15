/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 23:31:55 by shiray            #+#    #+#             */
/*   Updated: 2026/09/30 13:39:29 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
			dest[i] = src [i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "I am a Pisciner";
	char	dest[20];
	
	ft_strncpy(dest, src, 11);
	write(1, dest, 20);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:50:55 by shiray            #+#    #+#             */
/*   Updated: 2026/09/30 22:39:58 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	dest_len = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	src_len = i;
	if (dest_len == size)
		return (size + src_len);
	j = 0;
	while (src[j] != '\0' && dest_len + j + 1 < size)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char	dest[20] = "I am a Pisciner ";
	char	src[] = "from Wolfsburg";
	unsigned int	result;

	result = ft_strlcat(dest, src, 30);

	printf("dest: %s\n", dest);
	printf("return: %u\n", result);

	return (0);
}*/

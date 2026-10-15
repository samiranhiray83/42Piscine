/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiray <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 23:31:55 by shiray            #+#    #+#             */
/*   Updated: 2026/09/30 21:46:26 by shiray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		printf("s[%d] = %d", i, src[i]);

		if (src[i] != '\0')
			dest[i] = src [i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdlib.h>
int	main(void)
{
	/* char	src[] = "I a";
	char	dest[]="hfgjhg";
	
	char *cc = dest;
	ft_strncpy(dest, src, 3);
	while(*cc != '\0'){
			write(1, cc, 1);
			cc++;
	}
	return (0); */
	
	// char src[6] = "12345";
	// char dst[10] = "123456789";
	
	char* src = malloc(6);
	char* dst = malloc(10);

	for (int i = 0; i < 6; ++i) {
	       *src = i + '0';
	       ++src;
	}

	for (int i = 0; i < 10; ++i) {
		*dst = i + '0';
		++dst;
	}	

	ft_strncpy(dst, src, 10);

	printf("worked?\n");	

}


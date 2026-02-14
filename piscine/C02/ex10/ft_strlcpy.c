/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 20:54:22 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/22 19:09:43 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	slen;

	i = 0;
	slen = ft_strlen(src);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (slen);
}
/*
#include <stdio.h>
int     main(void)
{
        char dest[] = "Hi des";
        char src[] = "Hi source";
	int dsize = ft_strlen(dest) + 1;
        int result = ft_strlcpy(dest, src, dsize);
	printf("Copied destination string is: %s\n", dest);
	printf("Destination size is: %d.\n", dsize);
	printf("Source length is: %d.\n", result);
	printf("If src len is >= to dest size = string truncated.");
	return (0);
}
*/

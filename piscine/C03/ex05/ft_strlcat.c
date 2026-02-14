/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:22:10 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/24 16:51:09 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	y;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	y = dlen;
	if (size == 0)
		return (dlen + slen);
	if (size <= dlen)
		return (size + slen);
	while (src[i] != '\0' && y < size - 1)
	{
		dest[y] = src[i];
		i++;
		y++;
	}
	if (dlen < size)
		dest[y] = '\0';
	return (dlen + slen);
}
/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int	main(void)
{
	char src[] = "World";
	char dest[] = "Hello";
	int result = ft_strlcat(dest, src, 10);
	printf("Return value: %d\nString concat result: %s\n", result, dest);
	return (0);
}
*/

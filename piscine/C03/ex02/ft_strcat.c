/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:59:23 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/23 18:28:07 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dlen;

	i = 0;
	dlen = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dlen] = src[i];
		i++;
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "World";
	char dest[] = "Hello";
	ft_strcat(dest, src);
	printf("String de destino es: %s\n", dest);
	char src2[] = "World";
        char dest2[] = "Hello";
        ft_strcat(dest2, src2);
        printf("Función real, string de destino es: %s\n", dest2);
	return (0);
}
*/

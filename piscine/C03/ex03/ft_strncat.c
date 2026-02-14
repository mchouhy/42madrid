/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:01:26 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/23 18:32:36 by mchouhy-         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dlen;

	i = 0;
	dlen = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
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
int     main(void)
{
        char src[] = "World";
        char dest[8] = "Hellooo";
        ft_strncat(dest, src, 1);
        printf("String de destino es: %s\n", dest);
	char src2[] = "World";
        char dest2[8] = "Hellooo";
        strncat(dest2, src2, 1);
        printf("Función real, string de destino es: %s\n", dest);
        return (0);
}
*/

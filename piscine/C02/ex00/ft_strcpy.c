/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:27:11 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/16 21:00:02 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "Soy el origen";
	char dest[] = "Soy el destino";
	ft_strcpy(dest, src);
	printf("String de origen: %s\n", src);
	printf("String de destino: %s\n", dest);
    	return 0;
}
*/

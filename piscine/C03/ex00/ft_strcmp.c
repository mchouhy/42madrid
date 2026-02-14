/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 19:02:45 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/23 18:15:35 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (result != 0)
			return (result);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[] = "Hola como estas?";
	char str2[] = "Hola comO";
	int result = ft_strcmp(str1, str2);
	printf("Resultado de la comparación: %d\n", result);
	int result2 = strcmp(str1, str2);
	printf("Resultado función real: %d\n", result2);
	return (0);
}
*/

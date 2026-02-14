/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 19:02:45 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/23 18:17:55 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				r;

	i = 0;
	r = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		r = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (r != 0)
			return (r);
		i++;
	}
	return (r);
}

/*
#include <stdio.h>
int	main(void)
{
	char str1[] = "Hola comx estas?";
	char str2[] = "Hola como estas?";
	int result = ft_strncmp(str1, str2, 9);
	printf("Resultado de la comparación: %d", result);
	return (0);
}
*/

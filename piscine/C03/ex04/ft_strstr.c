/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:14:04 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/23 21:09:04 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		y = 0;
		while (to_find[y] != '\0' && str[i + y] == to_find[y])
			y++;
		if (to_find[y] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str[] = "caab";
	char to_find[] = "aab";
	printf("Result: %s\n", ft_strstr(str, to_find));
	printf("Result: %s\n", strstr(str, to_find));
	return (0); 
}
*/

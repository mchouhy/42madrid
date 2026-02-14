/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 19:32:02 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/18 20:45:32 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

int	is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) == 1 && i != 0)
		{
			if (is_alpha(str[i - 1]) == 0 && is_numeric(str[i - 1]) == 0)
				str[i] = str[i] - 32;
		}
		else if (is_alpha(str[i]) == 1 && i == 0)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "sALUT, COMMENT TU VAS ? 42MOTS QUARANTE-DEUX; CINQUANTE+ET+UN";
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
*/

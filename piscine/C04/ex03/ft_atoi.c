/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 20:57:02 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/25 20:25:31 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_dig(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_even(int num)
{
	if (num % 2 == 0)
		return (1);
	return (0);
}

/*
int	jump_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	return (i);
}

int	handle_minus(char *str, int *i)
{
	int	minus_count;

	minus_count = 0;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			minus_count++;
		(*i)++;
	}
	return (minus_count);
}
*/
int	handle_spaces_and_signs(char *str, int *i)
{
	int	minus_count;

	minus_count = 0;
	while (!is_dig(str[*i]))
	{
		if(str[*i] == '-')
			minus_count++;
		(*i)++;
	}
	return (minus_count);
}

int	ft_atoi(char *str)
{
	int	dig_count;
	int	num;
	int	i;
	int	minus_count;

	dig_count = 0;
	num = 0;
	//i = jump_spaces(str);
	i = 0;
	minus_count = handle_spaces_and_signs(str, &i);
	while (str[i] != '\0')
	{
		while (is_dig(str[i]))
		{
			num = (num * 10) + (str[i] - '0');
			dig_count++;
			i++;
		}
		if (dig_count > 0 && !is_dig(str[i]))
			break ;
		i++;
	}
	if (!is_even(minus_count))
		return (-num);
	return (num);
}

#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	//char str[] = "     ---+---+-1234a4b567";
	char str[] = "@@ -17,27 +17,27 @@$";
	//char str[] = "Today's temperature is 24 degrees";
	printf("%d", ft_atoi(str));
	//int num = '0' - '0';
	//printf("%d", num);
	return (0);
}

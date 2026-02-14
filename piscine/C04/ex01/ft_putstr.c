/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 19:58:19 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/22 20:05:48 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

void	ft_putstr(char *str)
{
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(str);
	write(1, str, l);
}
/*
int	main(void)
{
	char str[] = "Hello World";
	ft_putstr(str);
}
*/

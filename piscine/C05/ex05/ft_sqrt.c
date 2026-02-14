/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:17:34 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/26 18:00:35 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i != nb)
	{
		if (i > nb / i)
			return (0);
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int     main(void)
{
	int result = ft_sqrt(2147483647);
	printf("Resultado: %d", result);
}
*/

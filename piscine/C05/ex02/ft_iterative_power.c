/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:53:18 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/26 18:37:21 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	multiplier;

	i = 1;
	multiplier = nb;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	while (i < power)
	{
		nb *= multiplier;
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int result = ft_iterative_power(3, 0);
	printf("Resultado: %d", result);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:03:13 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/26 18:36:57 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_even(int nb)
{
	if (nb % 2 == 0)
		return (1);
	else
		return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (is_even(nb))
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	// 2147483647
	int result = ft_is_prime(2147483647);
	printf("Resultado: %d", result);
}
*/

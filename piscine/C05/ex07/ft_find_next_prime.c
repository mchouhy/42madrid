/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:38:49 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/26 19:03:24 by mchouhy-         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	i = nb + 1;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int nb = 15;
	int result = ft_find_next_prime(nb);
	printf("Next prime of %d is %d", nb, result);
	return (0);
}
*/

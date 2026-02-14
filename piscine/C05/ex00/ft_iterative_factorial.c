/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:22:49 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/25 18:42:05 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i > 1)
		nb *= i--;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int result = ft_iterative_factorial(0);
	printf("Result: %d", result);
}
*/

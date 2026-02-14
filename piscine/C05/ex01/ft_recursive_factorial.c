/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:43:28 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/26 14:53:40 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	if (nb > 1)
		nb = ft_recursive_factorial(nb - 1) * nb;
	return (nb);
}
/*
#include <stdio.h>
int     main(void)
{
        int result = ft_recursive_factorial(-5);
        printf("Result: %d", result);
}
*/

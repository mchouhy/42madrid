/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:04:24 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/15 17:48:53 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 1;
	int b = 20;

	ft_swap(&a, &b);
	printf("Valor de a: %d\n", a);
        printf("Valor de b: %d\n", b);
	return (0);
}
*/

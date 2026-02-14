/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:55:26 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/14 14:55:30 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	q;
	int	r;

	q = *a / *b;
	r = *a % *b;
	*a = q;
	*b = r;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 7;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("Resultado de ila división: %d\n", a);
	printf("Resto de la división: %d\n", b);
	return (0);
}
*/

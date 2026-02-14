/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:38:29 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/15 17:52:34 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	q;
	int	r;

	q = a / b;
	r = a % b;
	*div = q;
	*mod = r;
}
/*
#include <stdio.h>
int	main(void)
{
	int x = 20;
	int y = 30;

	printf("El valor de DIV es: %d\n", x);
        printf("El valor de MOD es: %d\n", y);

	ft_div_mod(7, 2, &x, &y);

	printf("El nuevo valor de DIV es: %d\n", x);
        printf("El nuevo valor de MOD es: %d\n", y);

}
*/

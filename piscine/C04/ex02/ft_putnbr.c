/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 20:07:07 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/25 17:52:34 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_limit_value(int num)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	else if (num == 2147483647)
	{
		write(1, "2147483647", 10);
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	int	n;

	if (is_limit_value(nb))
		return ;
	if (nb < 0)
	{
		n = -nb;
		write(1, "-", 1);
	}
	else
		n = nb;
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}
/*
int	main(void)
{
	ft_putnbr(123);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 19:11:53 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/09 19:13:28 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 1;
	while ((r <= y) && x > 0 && y > 0)
	{
		c = 1;
		while (c <= x)
		{
			if (r == 1 && (c == 1 || c == x))
				ft_putchar('A');
			else if (r == y && (c == 1 || c == x))
				ft_putchar('C');
			else if (r == 1 || r == y || c == 1 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		r++;
		ft_putchar('\n');
	}
	if (x <= 0 || y <= 0)
		(write(1, "ERROR rush parameters must be natural numbers.", 46));
}

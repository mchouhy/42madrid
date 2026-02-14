/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 19:11:30 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/09 19:11:33 by mchouhy-         ###   ########.fr       */
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
			if ((r == 1 || r == y) && (c == 1 || c == x))
				ft_putchar('o');
			else if (r == 1 || r == y)
				ft_putchar('-');
			else if (c == 1 | c == x)
				ft_putchar('|');
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

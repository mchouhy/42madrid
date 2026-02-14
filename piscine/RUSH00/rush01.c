/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 19:11:39 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/09 19:11:42 by mchouhy-         ###   ########.fr       */
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
			if ((r == y && c == x && x != 1 && y != 1) || (c == 1 && r == 1))
				ft_putchar('/');
			else if ((r == y && c == 1) || (c == x && r == 1))
				ft_putchar('\\');
			else if (r == 1 || c == 1 || r == y || c == x)
				ft_putchar('*');
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

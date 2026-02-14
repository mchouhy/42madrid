/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:23:56 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/10 18:39:34 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	negative = 'N';
	positive = 'P';
	if (n >= 0)
		write(1, &positive, 1);
	else
		write(1, &negative, 1);
}

/*
int	main(void)
{
	ft_is_negative(-5);
	return (0);
}
*/

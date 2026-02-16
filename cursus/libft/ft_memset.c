/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 11:38:11 by mchouhy-          #+#    #+#             */
/*   Updated: 2026/02/15 12:22:15 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while(s[i] <= n)
		s[i] = c;
	return (*s);
}

#include <stdio.h>
void	main(void)
{
	char arr[6];
	printf("El resultado es: %d", *ft_memset(arr, 'A', 5));
}

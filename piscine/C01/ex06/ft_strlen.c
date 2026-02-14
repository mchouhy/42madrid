/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:01:16 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/15 18:02:34 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
		count++;
	return (count);
}
/*
#include <stdio.h>

int main(void)
{
	char name[]  = "Mariano Chouhy";
	printf("%d" , ft_strlen(name));
	return (0);
}
*/		

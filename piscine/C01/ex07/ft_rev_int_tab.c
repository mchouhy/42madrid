/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:05:14 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/15 18:45:48 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define MAX_SIZE 100

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	ra[MAX_SIZE];
	int	count;

	i = size;
	count = 0;
	while (count < size)
	{
		ra[count] = tab[i - 1];
		i--;
		count++;
	}
	count = 0;
	while (count < size)
	{
		tab[count] = ra[count];
		count++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = 5;
	int count = 0;
	count = 0;
	printf("TAB ANTES DE LA FUNCIÓN: \n");
        while(count < size)
        {
                printf("%d", tab[count]);
                count++;
        }
	ft_rev_int_tab(tab, size);
	count = 0;
	printf("\nTAB DESPUÉS DE LA FUNCIÓN: \n");
        while(count < size)
        {
                printf("%d", tab[count]);
                count++;
        }
	return (0);
}
*/

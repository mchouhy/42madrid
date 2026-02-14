/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouhy- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:32:04 by mchouhy-          #+#    #+#             */
/*   Updated: 2025/11/27 15:59:27 by mchouhy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_program_name(char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i])
		i++;
	write(1, &argv[0][0], i);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_print_program_name(argv);
	return (0);
}

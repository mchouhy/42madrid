int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include <stdio.h>
int	main()
{
	char c1 = 'a';
	char c2 = '6';

	if (ft_isdigit(c1)) {
		printf("'%c' es un dígito.\n", c1);
	} else {
		printf("'%c' no es un dígito.\n", c1);
	}

	if (ft_isdigit(c2)) {
		printf("'%c' es un dígito.\n", c2);
	} else {
		printf("'%c' no es un dígito.\n", c2);
	}
	return (0);
}

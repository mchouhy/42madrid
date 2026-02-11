#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int main() {
    char c1 = '6';
    char c2 = 'x';

    if (ft_isalpha(c1)) {
        printf("'%c' es una letra.\n", c1);
    } else {
        printf("'%c' no es una letra.\n", c1);
    }

    if (ft_isalpha(c2)) {
        printf("'%c' es una letra.\n", c2);
    } else {
        printf("'%c' no es una letra.\n", c2);
    }

    return 0;
}

#include "libft.h"

int ft_isalnum(int c)
{
      if (ft_isalpha(c) || ft_isdigit(c))
            return (1);
      return (0);
}

#include <stdio.h>

int main()
{
      int c1 = '/';
      // int c2 = 'a';
      // int c3 = '3';

      if (ft_isalnum(c1))
            printf("Character '%c' is alphanumeric\n", c1);
      else
            printf("Character '%c' is not alphanumeric\n", c1);
      return (0);
}

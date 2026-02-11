#include "libft.h"
#include <stdio.h>

int main()
{
      int c1 = '/';
      // int c2 = 'a';
      // int c3 = '3';

      if (ft_isalpha(c1))
            printf("Character '%c' is alphabetic\n", c1);
      else
            printf("Character '%c' is not alphabetic\n", c1);
      return (0);
}
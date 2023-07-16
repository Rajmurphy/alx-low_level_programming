#include <stdio.h>

/**
* main - Entry point
* using for loop to print upper and lower case of the alphabet
* Return : Always 0 (SUCCESS)
**/

int main(void)
{
  char small, big;
  for (small = 'a'; small <= 'z'; small ++)
    {
        putchar(small);
    }
    for (big = 'A'; big <= 'Z'; big ++)
    {
        putchar(big);
    }
    putchar('\n');
    return (0);
}

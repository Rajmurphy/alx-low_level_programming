#include <stdio.h>

/**
 *main - Entry point, print 00 to 99 using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;
	int count = 0;

    for (i = 0; i <= 9; i++) {
        for (j = i + 1; j <= 9; j++) {
            if (count > 0) {
                putchar(',');
                putchar(' ');
                count += 2;
            }

            if (i == 0) {
                putchar('0');
                count++;
            } else {
                putchar(i + '0');
                count++;
            }

            putchar(j + '0');
            count++;
            
            if (count >= 60) {
                putchar('\n');
                count = 0;
            }
        }
    }

	return (0);
}

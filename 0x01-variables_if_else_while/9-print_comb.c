#include <stdio.h>

/**
 * main - Entrry point
 * Return: Always 0 (SUCCESS)
 **/

int main(void)
{

	int i,j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if ( i != 9 && j != 9)
				putchar(',');
		}
	}

	putchar('\n');

	return (0);

}

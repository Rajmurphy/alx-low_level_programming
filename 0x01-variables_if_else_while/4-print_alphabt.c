#include <stdio.h>

/**
 * main - Entry point
 * print all alphabet except e and q
 * Return: Always (SUCCESS)
 **/

int main(void)
{
	char small;

	for (small = 'a'; small <= 'z'; small++)
	{

		if (small != 'e' && small != 'q')
			putchar(small);
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (SUCCESS)
 **/

int main(void)
{

	char revers;

	for (revers = 'z'; revers >= 'a'; revers--)
	{
		putchar(revers);
	}
	putchar('\n');

	return (0);

}

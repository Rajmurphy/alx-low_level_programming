#include <stdio.h>

/**
 * main - Entry point
 * printing hexadecimal number
 * Return: Always 0 (SUCCESS)
 **/

int main(void)
{

	char hexas;

	for (hexas = '0'; hexas <= '9'; hexas++)
	{
		putchar(hexas);
	}

	for (hexas = 'a'; hexas <= 'f'; hexas++)
	{
		putchar(hexas);
	}

	putchar('\n');

	return (0);

}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argumnent counter
 * @argv: argumnet vector
 * Return 0 when no number is passed
 * Return 1 when number contains symbols that are not digits
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;
	char *p;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}

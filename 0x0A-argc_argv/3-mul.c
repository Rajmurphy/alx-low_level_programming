#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - convert and multiply 2 strings
 * @argc: argument counter
 * @argv: argument vector(array of strings)
 * Return 0 if pass and 1 if argument passed isn't 3
 */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

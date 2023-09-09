#include "main.h"
#include <stdio.h>

/**
 * main - print a program name
 * @argc: command line arggument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}

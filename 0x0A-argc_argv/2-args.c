#include "main.h"
#include <stdio.h>

/**
 * main - prin all argument the programm receive
 * @argc: argument counter
 * @argv: argument vector(arrays of argment)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
		for (count = 0; count < argc; count++)
			printf("%s\n", argv[count]);
return (0);
}

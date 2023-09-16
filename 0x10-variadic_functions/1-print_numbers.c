#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @*separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: if separator is null exit, otherwise success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pel;
	unsigned int i;
	va_start(pel, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pel, int));
			if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(pel);
}

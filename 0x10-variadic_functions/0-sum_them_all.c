#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all  - returns sum of all  it parameters
 * @n: parameter
 * Return: 0 if n is null
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pel;
	unsigned int i, sum;

	va_start(pel, n);
	sum = 0;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(pel, unsigned int);
	va_end(pel);
	return (sum);
}

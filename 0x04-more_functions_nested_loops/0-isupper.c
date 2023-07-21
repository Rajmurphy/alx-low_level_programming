#include "main.h"

/**
 * _isupper -Return 1 iif c is a upper letter
 * @c: the int to print
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _islower - check if it a lower case
 * @c: contains value to be compared
 * program checks for lower case
 * Return: Always 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

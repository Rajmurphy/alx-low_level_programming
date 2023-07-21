#include "main.h"

/**
 * _isdigit - cheeck for digit which are 0-9
 * @c: parameter
 * Return: 0 if sucessful
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

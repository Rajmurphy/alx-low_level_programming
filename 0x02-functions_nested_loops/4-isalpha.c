#include "main.h"

/**
 * _isalpha - check for alphabet
 * @c: contains value to be compared
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c < 'a' && c < 'z') || (c < 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);

	}

}

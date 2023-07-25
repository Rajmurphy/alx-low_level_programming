#include "main.h"

/**
 * _strlen - shows the number of string
 * @s: params
 * Return: 0
 */

int _strlen(char *s)
{

	int count = 0;

	while (s[count] != 0)
	{
		count++;
	}
	return (count);
}

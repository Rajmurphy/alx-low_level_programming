#include "main.h"

/**
 * _strncat - concatenate string
 * @dest: destination
 * @src: source
 * @n: param
 * Return:  dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (0);
}

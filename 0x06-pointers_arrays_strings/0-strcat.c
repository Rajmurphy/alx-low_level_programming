#include "main.h"

/**
 * _strcat - concatenation
 * @dest: param
 * @src: param;
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j + i] = src[j];
	}
	dest[j + i] = '\0';

	return (dest);
}

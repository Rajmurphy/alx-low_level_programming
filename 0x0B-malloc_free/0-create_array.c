#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: the character to be initilaized in the memory space
 * Returns - NULL if size = 0
 * Return: a pointer to the array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *ptarr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptarr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		ptarr[i] = c;
	}
	if (ptarr == NULL)
		return (NULL);
return (ptarr);
}

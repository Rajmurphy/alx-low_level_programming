#include "main.h"
#include <stdlib.h>

/**
  * _strdup - return pointer to newly allocated space in memory
  * @str: original string
  * Return: pointer to a pointer to new duplicated string
  */
char *_strdup(char *str)
{
	int i, count;
	char *b;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	b = malloc(i * sizeof(*b) + 1);
	if (b == NULL)
		return (NULL);

	for (count = 0; count < i; count++)
		b[count] = str[count];
	b[count] = '\0';

	return (b);
}

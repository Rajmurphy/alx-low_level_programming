#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: original string
* Return: pointer a pointer to the duplicated string.
*/

char *_strdup(char *str)
{
	char *ptrstr;
	int count, i;

	if (str == NULL)
		return (NULL);
	for (count = 0; str[count] != '\0'; count++)
	ptrstr = malloc(count * sizeof(*ptrstr) + 1);
	for (i = 0; i < count; i++)
	{
		ptrstr[i] = str[i];
	}

	ptrstr[i] = '\0';
	return (ptrstr);
}

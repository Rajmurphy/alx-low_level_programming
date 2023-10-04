#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space in memory, 
 * which contains a copy of the string given as a parameter.
 * @str: parameter
 * _strdup() function returns a pointer to a new string which is a duplicate of the string str
 *  Memory for the new string is obtained with malloc, and can be freed with free.
 * Returns NULL if str = NULL
 * Returns: a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
    char *ptrstr;
    int count, i, strlent = 0;

    for (count = 0; str[count] !='\0'; count++)
    ptrstr = malloc(strlent * sizeof(char) + 1);
    if (ptrstr == NULL)
        return (NULL);
    for (i = 0; str[i] != '\0'; i++)
    {
        /* code */
        ptrstr[i] = str[i];
    }
    
    ptrstr[i] = '\0';
    return (ptrstr);
}

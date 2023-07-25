#include "main.h"

/**
 * _puts - print to standard inpt output
 * @str param
 */

void _puts(char *str)
{
	int p = 0;

	while (str[p] != 0)
	{
		p++;
		_putchar(str[p]);
	}
	_putchar('\n');
}

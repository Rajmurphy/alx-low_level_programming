#include "main.h"

/**
 * swap_int - swaps value of 2 integer
 * @a: paraameter
 * @b: params
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

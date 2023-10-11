#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: struct dog
 * Description: If an element of d is NULL
 * print (nil) instead of this element.
 * (if name is NULL, print Name: (nil))
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name == NULL ? printf("(nil)\n") : printf("Name: %s\n", d->name);
		/**
		 * using the conditional operator ?
		 * syntax goes thus: condition ? expression_if_true : expression_if_false;
		 */
		printf("Age: %f\n", d->age);
		d->owner == NULL ? printf("(nil)\n") : printf("Owner: %s\n", d->owner);
	}
}

#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function tat print anything
 * @format: is a list of all type of argument passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * 
 * if the string is NULL, print (nil) instead
 * any other char should be ignored
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	char format_c[strlen(format) + 1]; strcpy(format_c, format);
	va_list par;
	char c;
	int i;
	float f;
	char *s;
	va_start(par, format);
	while (format){
		if (format_c == 'c'){
			c = (char)va_arg(par, int);
			printf("%c", c);
		}
		else if (format_c == '1'){
			i = va_arg(par, int);
			printf("%d", i);
		}
		else if (format_c == 'f'){
			f = (float)va_arg(par, double);
			printf("%f", f);
		}
		else if (format_c == 's'){
			s = va_arg(par, char*);
			if (s == NULL)
				printf("nil");
			else
				printf("%s", s);
		}
		format_c++;
	}
		va_end(par);
		printf("\n");
}
#include <stdio.h>

/*
 * main - Entry point
 * Write a program that prints the lowercase alphabet in reverse,
 *  followed by a new line.
 *  Return: Always 0 (SUCCESS)
 **/

int main(void)
{
	char revers;

	for (revers = 'a'; revers <= 'z'; revers--)
	{
		putchar(revers);
	}
	putchar(revers);

	return (0);

}

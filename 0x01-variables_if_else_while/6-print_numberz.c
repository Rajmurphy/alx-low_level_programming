#include <stdio.h>

/**
 * main - Entry point
 * Write a program that prints all single digit numbers of base
 * 10 starting from 0, followed by a new line.
 * Return: Always 0 (SUCCESS)
 **/

int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		putchar('0' + numb);
	}

	putchar('/n');

	return (0);

}

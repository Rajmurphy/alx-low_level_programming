#include "main.h"

/**
 * _sqrt_recursion - find the square root of a number
 * @n: parametr
 * Return: equivalent variale
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/*
 * _sqrt_recursion - to find the square root of a number
 * @n: to calculate the square root
 * @i: iterator
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt_recursion(n, i+1));
}

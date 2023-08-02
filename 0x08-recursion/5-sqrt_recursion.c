#include <stdio.h>
#include "main.h"

/**
 * help - Help in deciding square root
 * @i: integer to use
 * @n: integer for square root
 * Return: square root value
 */

int help(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = help(i + 1, n);
		return (j + 1);
	}
	return (0);
}


/**
 * _sqrt_recursion - Returns a natural square root of a number
 * @n: number to be used
 * Return: value of square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (help(i, n) == n && n != 1)
	{
		return (-1);
	}
	return (help(i, n));
}

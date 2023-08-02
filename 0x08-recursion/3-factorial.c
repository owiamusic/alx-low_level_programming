#include <stdio.h>
#include "main.h"

/**
 * factorial - Return factorial of a given number
 * @n: number to be calculated
 * Return: value of n or -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
	return (n * factorial(n - 1));
	}
	return (1);
}

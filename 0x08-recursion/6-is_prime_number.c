#include <stdio.h>
#include "main.h"

/**
 * help - Help in checking if number is prime
 * @i: number to check
 * @n: integer for prime
 * Return: 1
 */

int help(int i, int n)
{
	if (n % i == 0 && n != i)
	{
		return (0);
	}
	if (n % i != 0 && i < n)
	{
		return (help(i + 1, n));
	}
		return (1);
}


/**
 * is_prime_number - Check prime number and return value
 * @n: number to check
 * Return: Boolean (1 or 0)
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2);
	{
		return (0);
	}
	return (help(i, n));
}

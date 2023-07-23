#include "main.h"

/**
 * prime - prime numbers
 * @n: integer
 * @i: integer helper
 * Return: Value 
 */

int prime(int i, int n)
{
	if (n % i == 0 && n !=i)
	{
		return (0);
	}
	if (n % i != 0 && i < n)
		return (prime(i + 1, n));
	{
		return (1);
	}
}

/**
 * is_prime_number - check for prime numbers
 * @n: integer to compare
 * Return: 1 if true or 0 if false (Boolean)
 */

int is_prime_number(int n)
{
	int i = 2;
	
	if (n < 2)
	{
		return (0);
	}
		return (prime(i, n));
}

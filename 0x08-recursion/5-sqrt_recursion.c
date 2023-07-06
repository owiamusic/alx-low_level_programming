#include "main.h"

/**
 * _sqrt_recursion - funtion to return square root of a number
 * sqrt_recur - function to calculate square root
 * @n: the number
 * Return: value of square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_recur(n, 1));
}

int sqrt_recur(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (sqrt_recur(n, guess + 1));
}


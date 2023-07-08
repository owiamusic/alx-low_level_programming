#include "main.h"

/**
 * _abs - print the absolute  value of an integer
 * @n: is the absolute integer
 * Return: @n if integer is greater than 0
 * and (@n * -1) if integer is less than 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}

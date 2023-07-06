#include "main.h"

/**
 * _pow_recursion - function to  return x raise to the power y
 * @x: an integer
 * @y: an integer
 * Return: value of x to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return x * _pow_recursion(x, y - 1);
}


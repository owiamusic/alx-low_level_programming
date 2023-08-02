#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Returns the value of x to the power y
 * @x: number to be used
 * @y: number to be used
 * Return: value of power or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}

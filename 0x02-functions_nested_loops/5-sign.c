#include "main.h"

/**
 * print_sign - print sign of the number
 * @n: number to be checked
 * Return: -1 if false, 0 if true, 1 if false
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		{
			_putchar('0');
			return (0);
		}
}

#include "main.h"

/**
 * more_numbers - print 10 times of the numbers 0-14
 * Return: none
 */

void more_numbers(void)
{
	int n, i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar('1');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}

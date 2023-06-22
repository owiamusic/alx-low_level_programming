#include "main.h"

/**
 * more_numbers - print 10 times the number 0-14
 * Return: the numbers in tens
 */

void more_numbers(void)
{
	int n;
	int m;

	for (h = 0; h <= 9; h++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}

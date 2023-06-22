#include "main.h"

/**
 * more_numbers - print 10 times the number 0-14
 * Return: the numbers in tens
 */

void more_numbers(void)
{
	int n;
	int m;
	
	for (n = 0; n < 14; n++)
	{
		for (m = 0; m < 10; m++)
			{
			_putchar(m);
			}
		_putchar('\n');
	}
}

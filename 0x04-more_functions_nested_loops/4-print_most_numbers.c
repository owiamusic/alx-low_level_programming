#include "main.h"

/**
 * print_most_numbers - print all numbers without 2 & 4
 * Return: c at end of program
 */

int print_most_numbers(void);
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

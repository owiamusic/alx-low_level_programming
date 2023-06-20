#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10x
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char alpha10;
			
	while (n < 10)
	{
	for (alpha10 = 'a'; alpha10 <= 'z'; alpha10++)
	{
		_putchar(alpha10);
	}

	_putchar('\n');
	n++;
	}
}

#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10x
 */

void print_alphabet_x10(void)
{
	int alpha10;
	int ten = 0;
	
	while (ten < 10)
	{
	for (; alpha10 <= 'z'; alpha10++)
	{
		_putchar(alpha10);
	}

	_putchar('\n');
	}
}

#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10x
 */

void print_alphabet_x10(void);
{
	int alpha10;

	for (alpha10 = 97; alpha10 <= 122; alpha10++)
	{
		_putchar(alpha10);
	}

	_putchar('\n');
}

int main(void)
{
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
}

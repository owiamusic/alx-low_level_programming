#include "main.h"

/**
 * main - start point of program
 * print_alphabet -  print lowercase alphabet
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');

}

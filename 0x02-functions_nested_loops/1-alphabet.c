#include "main.h"

/**
 * main - start point of program
 * Return: 0 at end of program
 */

void print_alphabet(void)
{
	int alpha= 97;
	for (; alpha <= 122; alpha++);
	{
		_putchar(alpha);
	}
	_putchar('\n');
	
	return (0);
}

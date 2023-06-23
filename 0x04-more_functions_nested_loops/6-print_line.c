#include "main.h"

/**
 * print_line - prints a line
 * Return: none
 * @n: the number of character to be printed
 */

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
		_putchar('\n');
}

#include "main.h"

/**
 * print_line - prints a line
 * Return: none
 * @n: the number of character to be printed
 */

void print_line(int n)
{
		if (n > 0)
		{
			_putchar('_');
			n++;
		}
		else if (n <= 0)
		{
		_putchar('\n');
		}
}

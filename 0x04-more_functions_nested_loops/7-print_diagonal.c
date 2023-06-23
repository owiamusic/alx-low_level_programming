#include "main.h"

/**
 * print_diagonal - print lines diagonally
 * @n: the number to be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_diagonal - print lines diagonally
 * @n: the number to be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int size;

	if (n <= 0)
	{
		_putchar('\n');
			}
	else
	{
		for (i = 0; i < n; i++)
	{
		for (size = 0; size < i; size++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}

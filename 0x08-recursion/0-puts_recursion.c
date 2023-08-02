#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string with new line
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}

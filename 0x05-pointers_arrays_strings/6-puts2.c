#include "main.h"

/**
 * puts2 - print character of a string, first characters
 * @str: pointer of the characters
 */

void puts2(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		if (l % 2 == 0)
		{
		_putchar(str[l]);
		}
	}
	_putchar('\n');
}

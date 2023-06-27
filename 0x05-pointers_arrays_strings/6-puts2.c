#include "main.h"

/**
 * puts2 - print character of a string, first characters
 * @str: pointer of the characters
 */

void puts2(char *str)
{
	int l;
	int j;
		
	while (l != '\0')
	{
		l++;
	}

	for (j = 0; j < l; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

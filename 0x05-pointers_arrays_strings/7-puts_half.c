#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print half of a string
 * @str: pointer of characters
 */

void puts_half(char *str)
{
	int i;
	int half = 0;

	if (_strlen(str) % 2 != 0)
	{
		half += 1;
	}
	for (i = (_strlen(str) + half) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

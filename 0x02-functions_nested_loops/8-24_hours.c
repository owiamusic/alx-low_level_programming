#include "main.h"

/**
 * jack_bauer - print minutes of Jack Bauer
 */

void jack_bauer(void)
{
	int t;
	int s;

	for (t = 0; t <= 23; t++)
	{
		for (s = 0; s <= 59; s++)
		{
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			_putchar(':');
			_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
			_putchar('\n');
		}
	}
}

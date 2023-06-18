#include <stdio.h>

/**
 * main - starting point of program
 * Return: 0 end point of program
 */

int main(void)
{
	int base16;

	for (base16 = 0; base16 <= 15; base16++)
	{
		if (base16 < 10)
		{
			putchar('0' + base16);
		}
		else
		{
			putchar('a' + base16 - 10);
		}
	}
	putchar('\n');

	return (0);
}

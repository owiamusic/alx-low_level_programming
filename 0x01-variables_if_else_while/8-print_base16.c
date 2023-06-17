#include <stdio.h>

/**
 * main - Start point of program
 * Return: 0 at end of program
 */

int main(void)
{
	int base16;

	for (base16 = 0; base16 <= 15; base16++)
	{
		if (base16 < 10)
		{
			putchar("%c", base16);
		}
			else
			{
				putchar("%c", 'A' + base16 - 10);
			}
	}

	return (0);

}

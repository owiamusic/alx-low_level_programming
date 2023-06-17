#include <stdio.h>

/**
 * main - Starting point of program
 * Return: 0 at the end of program
 */

int main(void)
{
	int base10;

	for (; base10 < 10; base10++)
	{
		putchar('0' + base10);
	}

	putchar('\n');

	return (0);
}

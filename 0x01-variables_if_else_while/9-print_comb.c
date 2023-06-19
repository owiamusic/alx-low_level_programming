#include <stdio.h>

/**
 * main - starting point of program
 * Return: 0 at end of program
 */

int main(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);

}

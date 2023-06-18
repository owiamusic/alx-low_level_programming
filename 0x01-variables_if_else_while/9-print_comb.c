#include <stdio.h>

/**
 * main - starting point of program
 * Return: 0 at end of program
 */

int main(void)
{
	int n = 0;

	for (; n <= 10; n++)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
	}

	return (0);

}

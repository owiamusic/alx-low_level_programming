#include <stdio.h>

/**
 * main - starting point of program
 * Return: 0 at end of program
 */

int main(void)
{
	int n;

	for (n = 0; n <= 10; n++);
	{
		putchar("%d", n);
		putchar(',');
	}

	return (0);

}

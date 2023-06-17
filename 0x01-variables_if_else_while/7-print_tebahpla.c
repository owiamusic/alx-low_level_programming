#include <stdio.h>

/**
 * main - starting point of program
 * Return: 0 at the end point of program
 */

int main(void)
{
	char reverseAlpha = 'z';

	while (reverseAlpha >= 'a')
	{
		putchar(reverseAlpha);
			reverseAlpha--;
	}

	putchar('\n');

	return (0);
}

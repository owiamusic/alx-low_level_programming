#include <stdio.h>

/**
 * main - starting point of alphabet
 * Return: 0 after ending
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
{
	putchar(alpha);
	alpha++;
}

	putchar('\n');

	return (0);

}

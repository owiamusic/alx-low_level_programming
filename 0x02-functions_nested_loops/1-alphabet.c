#include "main.h"

/**
 * main - start point of program
 * Return: 0 at end of program
 */

void print_alphabet(void)
{
	char alpha= 'a';
	while (alpha <= 'z');
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	
	return (0);
}

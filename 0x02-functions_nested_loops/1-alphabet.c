#include "main.h"

/**
 * main - start point of program
 * Return: 0 at end of program
 */

void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++);
	{
		putchar("%s", alpha);
	}
	putchar('\n');
	
	return (0);
}

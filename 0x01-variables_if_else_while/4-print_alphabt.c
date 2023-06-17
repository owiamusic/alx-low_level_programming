#include <stdio.h>

/**
 * main - Start point of program
 * Return: 0 at end of program
 */

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'q' && lowercase != 'e')
	{
		putchar(lowercase);
	}
	}

	putchar('\n');

	return (0);

}

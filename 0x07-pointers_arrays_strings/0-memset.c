#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s - array to set
 * @b - constant byte
 * @n - number of times
 * Return: s at end of program
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return(s);
}

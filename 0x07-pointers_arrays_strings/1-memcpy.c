#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: array to be set
 * @src: memory area
 * @n: number of times
 * Return: dest at end of program
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	       
	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

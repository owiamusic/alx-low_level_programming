#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: points to first string
 * @src: the second string to be appended
 * @n: the number of string characters
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
       	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

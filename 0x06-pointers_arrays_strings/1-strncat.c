#include "main.h"

/**
 * _strncat - concatenates two strings by bytes
 * @dest: first string
 * @src: the second string to be appended to dest
 * @n: the bytes of characters to be printed
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *cat_n = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		if (n > 0)
		{
		*dest = *src;
		dest++;
		src++;
		n--;
		}
		break;
	}
	dest = '\0';
	return cat_n;
}

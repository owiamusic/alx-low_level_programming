#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest - points to first string
 * @ src - the second string to be appended
 * Return: temp pointer
 */

char *_strcat(char *dest, char *src)
{
	char *cat = dest;
	
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	
	return cat;
}

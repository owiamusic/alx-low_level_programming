#include "main.h"
#include <string.h>

/**
 *_strlen - returns length of a string
 * @s: string to be checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

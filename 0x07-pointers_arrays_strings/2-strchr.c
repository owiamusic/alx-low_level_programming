#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to check character
 * @c: character to check
 * Return: character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	i++;
	}
	return NULL;
}

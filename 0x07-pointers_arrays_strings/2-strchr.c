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
	int i;

	for (i = 0; s[i] !='\0'; i++)
	{
		if (s[i] == c)
		{
			return &s[i];
		}
	}
	return (0));
}

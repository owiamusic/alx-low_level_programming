#include "main.h"

/**
 * _strpbrk - searches for a string of any bytes
 * @s: string to check
 * @accept: string
 * Return: returns a pointer that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; i++)
	{
		for (b = 0; accept[b] != '\0'; j++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return (0);
}

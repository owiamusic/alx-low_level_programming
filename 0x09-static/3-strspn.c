#include "main.h"
#include <stdio.h>

/**
 * _strspn - get the length of prefix substring
 * @s: string to check
 * @accept: bytes to accept
 * Return: returns number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int res = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				res++;
				break;
			}
		}
		if (s[j] == '\0')
			return (res);
	}
	return (res);
}

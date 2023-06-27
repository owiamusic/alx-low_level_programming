#include "main.h"

/**
 * rev_string - a function to reverse a string
 * @s: pointer of the string
 */

void rev_string(char *s)
{
	int l = 0;
	int a, z;
	char p;

	while (s[l] != '\0')
	{
		l++;
	}

	for (a = 0, z = l - 1; a < z; a++, z--)
		{
		p = s[a];
		s[a] = s[z];
		s[z] = p;
		}
}

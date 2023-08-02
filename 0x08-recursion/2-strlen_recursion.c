#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - print the length of a string
 * @s: string to be compared
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[len] != '\0')
	{
		len = _strlen_recursion(s + 1);
		return (len = len + 1);
	}
	return (0);
}

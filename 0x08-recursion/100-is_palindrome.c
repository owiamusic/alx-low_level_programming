#include <stdio.h>
#include "main.h"

/**
 * help - String helper
 * @i: integer
 * @s: string to compare
 * Return: value
 */

int help(int i, char *s)
{
	if (*s)
	{
		if (*s != s[_strlen_recursion(s) - i])
		{
			return (0);
		}
		else
		{
			return (help(i + 1, s + 1));
		}
	}
	return (1);
}

/**
 * is_palindrome - Prints boolean if string is palindrome
 * @s: string to compare
 * Return: Boolean
 */

int _is_palindrome(char *s)
{
	int i = 1;
	
	return (help(i, s));
}

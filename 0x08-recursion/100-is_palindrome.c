#include <stdio.h>
#include "main.h"

/**
 * len - Length of a string
 * @s: string to compare
 * Return: Length of string
 */

int len(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i = len(s + 1);
		return (i += 1);
	}
	return (0);
}


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
		if (*s != s[len(s) - i])
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

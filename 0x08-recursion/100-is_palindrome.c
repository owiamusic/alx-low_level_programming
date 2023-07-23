#include "main.h"

/**
 * strlength - string length
 * @s: string to check
 * Return: string length
 */

int strlength(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * cmp - compare
 * @i: integer
 * @s: string
 * Return: value
 */

int cmp(int i, char *s)
{
	if (*s)
	{
		if (*s != s[strlength(s) - i])
		{
			return (0);
		}
		else
		{
			return (cmp(i + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - check if it is paldindrome
 * @s: string to check
 * Return: Boolean (True for 1 or False for 0)
 */

int is_palindrome(char *s)
{
	int i = 1;

	return (cmp(i, s));

}

#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: the letter to be checked
 * Return: 1 is letter is uppercase or 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
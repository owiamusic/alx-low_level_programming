#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the letter to be checked
 * Return: 1 is true or 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

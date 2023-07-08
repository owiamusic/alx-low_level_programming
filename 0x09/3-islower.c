#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: the lowercase case to be checked
 * Return: 1 is true and 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

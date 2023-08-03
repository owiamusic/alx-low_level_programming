#include "main.h"

/**
 * _strcmp - comparing two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: end program
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
		return (*s1 - *s2);
		}
	}
	return (0);
}

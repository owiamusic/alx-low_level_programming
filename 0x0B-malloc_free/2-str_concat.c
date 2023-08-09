#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: string to check
  * @s2: string to copy
  * Return: pointer to new space
  */

char *str_concat(char *s1, char *s2)
{
	char *strNew;
	int len1 = 0;
	int len2 = 0;
	char *temp;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}
	strNew = malloc(sizeof(char) * (len1 + len2 + 1));
	if (strNew == NULL)
	{
		return (NULL);
	}
	temp = strNew;

	while (*s1 != '\0')
	{
		*temp = *s1;
		temp++;
		s1++;
	}

	while (*s2 != '\0')
	{
		*temp = *s2;
		temp++;
		s2++;
	}
	*temp = '\0';
	return (strNew);
}

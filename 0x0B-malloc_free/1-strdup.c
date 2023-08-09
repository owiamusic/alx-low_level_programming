#include <stdlib.h>
#include "main.h"

/**
  * _strdup - Function that returns a pointer to newly allocated space
  * @str: String to check
  * Return: Null or Pointer
  */

char *_strdup(char *str)
{
	char *newString;
	int i;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
		newString = malloc(sizeof(char) * j + 1);
	if (newString == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		newString[i] = str[i];
	}
		return (newString);

}


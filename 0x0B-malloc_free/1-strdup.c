#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - check duplicate string
 * @str: string to use
 * Return: char to new duplicated string
 */

char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *j;
	
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[c] != '\0')
		c++;
	
	j = malloc(sizeof(char) * c + 1);

	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		j[i] = str[i];
	}
	return (j);
}

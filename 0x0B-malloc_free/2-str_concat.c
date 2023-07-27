#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - Concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to char
  */

char *str_concat(char *s1, char *s2)
{
	char *temp;
	int i = 0;
	int j = 0;
	int k;
	int l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	temp = (char *)malloc((i + j + 1) * sizeof(char));

	if (temp == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		temp[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		temp[k + l] = s2[l];
	}
		temp[k + j] = '\0';
		return (temp);
}

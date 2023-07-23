#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array
 * @size: size of array to create
 * @c: char to initialize
 * Return: char value
 */

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size <= 0)
		return (NULL);
	i = malloc(sizeof(char) * size);
	if (i == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		i[j] = c;

	return (i);
}

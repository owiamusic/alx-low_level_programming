#include "main.h"
#include <stdlib.h>

/**
  * array_range - Creates an array of integers
  * @min: minimum
  * @max: maximum
  * Return: pointer of array
  */

int *array_range(int min, int max)
{
	int *Arr;
	int i;
	int len = 0;

	if (min > max)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		len++;
	}

	Arr = malloc(sizeof(int) * len);

	if (Arr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		Arr[i] = min;
		i++;
		min++;
	}
	return (Arr);
}

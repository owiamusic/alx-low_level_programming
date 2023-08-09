#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to two dimensional arrays
 * @width: width
 * @height: height
 * Return: Boolean
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **newInt;

	if (width <= 0 || height <= 0)
		return (NULL);

	newInt = (int **) malloc(sizeof(int *) * height);

	if (newInt == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		newInt[i] = (int *)malloc(sizeof(int) * width);
		if (newInt[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(newInt[j]);
			}
			free(newInt);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			newInt[i][j] = 0;
	return (newInt);
}

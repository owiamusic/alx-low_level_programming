#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - iterates an array
 * @array: The array to iterate over
 * @size: The size of the array to iterate
 * @action: A pointer to the function used to print
 */

void array_iterator(int *array,	size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size != 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}


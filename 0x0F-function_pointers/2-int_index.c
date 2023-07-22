#include "function_pointers.h"

/**
 * int_index - search for index
 * @array: array of integer
 * @size: number of elements
 * @cmp: function pointer
 * Return: -1 for error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

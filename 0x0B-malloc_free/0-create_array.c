#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars and initialize
  * @size: size of array
  * @c: character to initialize
  * Return: Null or array pointer
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *create_array = malloc(sizeof(char) * size);

	if (create_array == NULL)
		return (NULL);
	}
	if (size == 0)
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		create_array[i] = c;
	}
		return (create_array);
}

#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Allocate memory using malloc
  * @b: integer
  * Return: pointer
  */

void *malloc_checked(unsigned int b)
{
	void *mem;
       	
	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}

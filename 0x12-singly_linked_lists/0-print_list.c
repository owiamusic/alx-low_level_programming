#include <stdio.h>
#include "lists.h"

/**
  * print_list - print all elements
  * @h: number of elements
  */

size_t print_list(const list_t *h)
{
	int c = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->length, h->str);
		}
		h = h->next;
		c++;
	}
	return (c);
}

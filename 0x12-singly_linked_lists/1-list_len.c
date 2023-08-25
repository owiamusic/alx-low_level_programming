#include "lists.h"

/**
  * list_len - A function that returns the number of elements in a linked list
  * @h: head of linked list
  * Return: Number of elements
  */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

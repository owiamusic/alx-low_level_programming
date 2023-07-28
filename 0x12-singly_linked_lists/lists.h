#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * struct list_t - struct node
  * @str: string for nodes
  * @length: length of string
  * @next: pointer to next node
  */

typedef struct list_t
{
	char *str;
	int length;
	struct list_t *next;
} lists_t;

size_t print_list(const list_t *h);

#endif /** END LIST */

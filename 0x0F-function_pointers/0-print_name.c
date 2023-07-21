#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to print
 * @f: to print
 */

void print_name(char *name, void (*f)(char *))
{
	if(f != NULL && name != NULL)
	{
	f(name);
	}
}

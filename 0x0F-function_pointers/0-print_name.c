#include "function_pointers.h"

/**
 * print_name - function pointer to print name
 * @name: Name to be printed
 * @f: function to be called
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

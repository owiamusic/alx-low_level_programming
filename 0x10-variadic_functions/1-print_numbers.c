#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by new line
 * @seperator: the string to be printed
 * @n: integers to be passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int arg_num;
	
	va_list print_n;
	va_start(print_n, n);

	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		arg_num = va_arg(print_n, int);
		printf("%d", arg_num);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
	va_end(print_n);
}

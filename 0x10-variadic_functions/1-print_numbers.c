#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by new line
 * @seperator: string to be printed between numbers
 * @n: number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printArg;
	unsigned int i;
	int result = 0;

	if (separator == NULL)
		separator = "";

	va_start(printArg, n);

	for (i = 0; i < n; i++)
	{
		result += printf("%d", va_arg(printArg, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(printArg);
}

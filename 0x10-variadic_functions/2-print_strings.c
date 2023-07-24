#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print strings followed by new line
 * @separator: seperate strings
 * @n: strings to be passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *numArg;

	va_list printStr;

	va_start(printStr, n);

	for (i = 0; i < n; i++)
	{
		numArg = va_arg(printStr, char *);
		if (numArg == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", numArg);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(printStr);
	printf("\n");
}

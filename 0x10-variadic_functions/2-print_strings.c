#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings followed by new line
 * @separator: string to be printed between
 * @n: strings passed into function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printStr;
	unsigned int i;
	char *strArg;

	if (separator == NULL)
		separator = "";

	va_start(printStr, n);
	for (i = 0; i < n; i++)
	{
		strArg = va_arg(printStr, char *);
		if (strArg == NULL)
			printf("(nil)");
		else
			printf("%s", strArg);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(printStr);
	printf("\n");
}


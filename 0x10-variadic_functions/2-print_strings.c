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
	char *strArg;

	va_list printStr;

	va_start(printStr, n);

	for (i = 0; i < n; i++)
	{
		strArg = va_arg(printStr, char *);

		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}
		if (strArg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strArg);
		}
	}
	va_end(printStr);
	printf("\n");
}

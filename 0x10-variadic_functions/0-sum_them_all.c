#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Sum all parameters
 * @n: first argument
 * Return: Boolean or value
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list sumArg;

	if (n == 0)
	{
		return (0);
	}
	va_start(sumArg, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(sumArg, int);
	}
	va_end(sumArg);

	return (sum);
}

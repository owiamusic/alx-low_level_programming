#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all parameters
 * @n: arguments
 * Return: 0 or value
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	int num_arg;

	va_list funcs;

	va_start(funcs, n);

	sum = 0;

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		num_arg = va_arg(funcs, int);
		sum += num_arg;
	}
	va_end(funcs);
	return (sum);
}

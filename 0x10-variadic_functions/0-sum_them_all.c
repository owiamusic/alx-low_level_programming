#include "variadic_functions.h"

/**
 * sum_them_all - Sum all parameters
 * @n: first argument
 * Return: Boolean or value
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list sumArg;

	if (n == 0)
	{
		return (0);
	}
	va_start(sumArg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(sumArg, unsigned int);
	}
	va_end(sumArg);
	return (sum);
}

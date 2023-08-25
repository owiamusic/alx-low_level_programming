#include "variadic_functions.h"

/**
 * printChar - prints chararacters
 * @a: chars
 * Return: always 0
 */

int printChar(va_list a)
{
	printf("%c", va_arg(a, int));
	return (0);
}

/**
 * printInt - prints integers
 * @a: parameters
 * Return: always 0
 */

int printInt(va_list a)
{
	printf("%d", va_arg(a, int));
	return (0);
}

/**
 * printFloat - prints float
 * @a: list of parameters
 * Return: always 0
 */

int printFloat(va_list a)
{
	printf("%f", va_arg(a, double));
	return (0);
}

/**
 * printStr - prints string
 * @a: arguments
 * Return: always 0
 */

int printStr(va_list a)
{
	char *print;

	print = va_arg(a, char *);
	if (print == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", print);
	return (0);
}

/**
 * print_all - prints all
 * @format: format string that takes arguments
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *sep = "";
	char *sep2 = ", ";
	va_list anyArgs;
	printer ops[] = {
		{"c", printChar},
		{"i", printInt},
		{"s", printStr},
		{"f", printFloat},
		{NULL, NULL}
	};

	va_start(anyArgs, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (ops[j].f != NULL)
		{
			if (format[i] == *(ops[j].c))
			{
				printf("%s", sep);
				ops[j].f(anyArgs);
			}
			j++;
		}
		sep = sep2;
		i++;
	}
	printf("\n");
	va_end(anyArgs);
}

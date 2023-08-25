#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int printChar(va_list a);
int printInt(va_list a);
int printFloat(va_list a);
int printStr(va_list a);

/**
  * struct op - Structure options
  * @c: character to check
  * @f: function pointer
  */

typedef struct op
{
	char *c;
	int (*f)(va_list a);
} printer;

#endif /** End Variadic Function */

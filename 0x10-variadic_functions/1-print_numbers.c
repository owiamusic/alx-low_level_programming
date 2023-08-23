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

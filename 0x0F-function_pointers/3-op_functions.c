#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Adds an return the sum of a and b
 * @a: integer a
 * @b: integer b
 * Return: value
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substracts and return value
 * @a: integer a
 * @b: integer b
 * Return: value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply and return value
 * @a: integer a
 * @b: integer b
 * Return: value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide and return value
 * @a: integer a
 * @b: integer b
 * Return: value
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	printf("Error\n");
	exit(100);
}

/**
 * op_mod - Return remainder of division
 * @a: integer a
 * @b: integer b
 * Return: value
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	printf("Error\n");
	exit(100);
}

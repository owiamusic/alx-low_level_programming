#include "main.h"

/**
 * print_last_digit - print the last digit of an integer
 * @n: the integer to be checked
 * Return: the last digit of the integer
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}

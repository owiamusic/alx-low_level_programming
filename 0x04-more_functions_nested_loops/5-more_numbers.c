#include "main.h"

/**
* more_numbers - print 10 times of the numbers 0-14
*
*/

void more_numbers(void)
{
	int n;

	for (n = 0; n >= 14; n++)
	{
		while (n < 10)
		{
			_putchar(n);
			n++;
		}

			_putchar('\n');
			
	}
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Prints the last digit of a number
 * if its greater than, less than
 * Return: 0 is number is 0
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	else if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	else(n == 0)
		    printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	return (0);
}

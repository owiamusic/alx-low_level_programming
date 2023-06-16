#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main- Prints if the number is negative
 * or positive
 * Return: zero if number is 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is negative\n", n);
	printf("%d is zero\n", n);
	printf("%d is positive\n", n);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
  * main - Multiplies two numbers
  * @argc: Number of arguments
  * @argv: Arguments to be passed
  * Return: Boolean
  */

int main(int argc, char *argv[])
{
	int arg1;
	int arg2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	printf("%d\n", (arg1 * arg2));
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the number of arguments passed
  * @argc: Number of arguments
  * @argv: Arguments passed on command line
  * Return: 0 for success
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc--)
	{
	printf("%d\n", argc);
	}
	return (0);
}

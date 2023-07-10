#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - Program that prints a number
 * @argc: Argument counts
 * @argv: command line arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d \n", argc - 1);
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints a number
 * @argc: Argument counts
 * @argv: command line arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	argc--;

	printf("%d \n", argc);
	return (0);
}

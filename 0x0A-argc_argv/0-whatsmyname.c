#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints its name
 * @argc: Argument count
 * @argv: Argument string
 * Return: 0 indicating success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}

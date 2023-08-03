#include <stdlib.h>
#include <stdio.h>

/**
  * main - Prints program name followed by new line
  * @argc: Number of arguments
  * @argv: Arguments to be passed
  * Return: 0 on success
  */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}
	return (0);

}

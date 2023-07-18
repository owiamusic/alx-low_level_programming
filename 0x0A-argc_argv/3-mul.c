#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: value of int argc and argv
 */

int main(int argc, char *argv[])
{
	int arg0;
	int arg1;
	
	if (argc == 3)
	{
		arg0 = atoi(argv[1]);
		arg1 = atoi(argv[2]);
		printf("%d\n", (arg0 * arg1));
		return (0);
	}
	else 
	{
		printf("Error\n");
		return (1);
	}
}

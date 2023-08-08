#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isString - checks for a string
 * @s: string to check
 * Return: boolean
 */

int isString(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 * Return: always 0
 */

int main(int argc, char  *argv[])
{
	int i;
	int sum = 0;
	
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isString(argv[i]))
			{
			       sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}
}
